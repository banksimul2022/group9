-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`Asiakas`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Asiakas` (
  `idAsiakas` INT NOT NULL,
  `Tunnus` VARCHAR(45) NOT NULL,
  `Nimi` VARCHAR(45) NOT NULL,
  `Osoite` VARCHAR(45) NOT NULL,
  `Puhelinnumero` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idAsiakas`),
  UNIQUE INDEX `idAsiakas_UNIQUE` (`idAsiakas` ASC) VISIBLE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Tili`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Tili` (
  `Tilinro` INT NOT NULL,
  `Saldo` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`Tilinro`),
  UNIQUE INDEX `Tilinumero_UNIQUE` (`Tilinro` ASC) VISIBLE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Kortti`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Kortti` (
  `KorttiNro` INT NOT NULL,
  `Tunnusluku` VARCHAR(255) NOT NULL,
  `idAsiakas` INT NOT NULL,
  `Tili_Tilinro` INT NOT NULL,
  PRIMARY KEY (`KorttiNro`),
  UNIQUE INDEX `KorttiNro_UNIQUE` (`KorttiNro` ASC) VISIBLE,
  INDEX `fk_Kortti_Asiakas1_idx` (`idAsiakas` ASC) VISIBLE,
  INDEX `fk_Kortti_Tili1_idx` (`Tili_Tilinro` ASC) VISIBLE,
  CONSTRAINT `fk_Kortti_Asiakas1`
    FOREIGN KEY (`idAsiakas`)
    REFERENCES `mydb`.`Asiakas` (`idAsiakas`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Kortti_Tili1`
    FOREIGN KEY (`Tili_Tilinro`)
    REFERENCES `mydb`.`Tili` (`Tilinro`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Tilitapahtumat`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Tilitapahtumat` (
  `id_Tilitapahtuma` INT NOT NULL,
  `PvmAika` DATETIME NOT NULL,
  `Tapahtuma` VARCHAR(45) NOT NULL,
  `Summa` VARCHAR(45) NOT NULL,
  `Tilinro` INT NOT NULL,
  PRIMARY KEY (`id_Tilitapahtuma`),
  INDEX `fk_Tilitapahtumat_Tili1_idx` (`Tilinro` ASC) VISIBLE,
  CONSTRAINT `fk_Tilitapahtumat_Tili1`
    FOREIGN KEY (`Tilinro`)
    REFERENCES `mydb`.`Tili` (`Tilinro`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Asiakas_has_Tili`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Asiakas_has_Tili` (
  `idAsiakas` INT NOT NULL,
  `Tilinro` INT NOT NULL,
  PRIMARY KEY (`idAsiakas`, `Tilinro`),
  INDEX `fk_Asiakas_has_Tili_Tili1_idx` (`Tilinro` ASC) VISIBLE,
  INDEX `fk_Asiakas_has_Tili_Asiakas_idx` (`idAsiakas` ASC) VISIBLE,
  CONSTRAINT `fk_Asiakas_has_Tili_Asiakas`
    FOREIGN KEY (`idAsiakas`)
    REFERENCES `mydb`.`Asiakas` (`idAsiakas`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Asiakas_has_Tili_Tili1`
    FOREIGN KEY (`Tilinro`)
    REFERENCES `mydb`.`Tili` (`Tilinro`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
