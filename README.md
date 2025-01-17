# KiCAD FreeCAD TechDraw Template Generator

This small and crudely programmed Qt Program creates drawing sheet templates for [FreeCAD](https://freecad.org) and [KiCAD](https://kicad.org) that are mostly identical.

## Aims

The aim of this Project was to create a unified template for KiCAD and FreeCAD TechDraw. The template is similar to the ISO 5457 standard for the general layout; ISO 7200 for the Titleblock; ASME Y14.35 for the optional revision history; and DIN 824 for the optional folding lines. 

For the font [osifont](https://github.com/hikikomori82/osifont) was used. ISO font was used for DXF.

## Prerequisites

* Qt
* [Osifont](https://github.com/hikikomori82/osifont)

## Usage

## Styles
- ISO5457 ISO700

## Limitations

### KiCAD 5

* Not able to change the font (with 7(6.99) possible)

### KiCAD 6

* Not able to change the font (with 7(6.99) possible)

### KiCAD 7(6.99)

### FreeCAD

* SVG text height is not the same as the real height

### PDF
This is mostyl meant for printing as a template for hand drawing.

* The text in the "editable fields" is not editable

### Eagle 6.5 

(To be done)

## Variable Docu

* `&{N}` Number of repetition, see Rev. History
* `&{F}` Field number, see the partslists

## Logo (Branding)

It is possible to include a Logo in the Legal owner Field (name can be modified). This is meant for a company logo or brand. The specification for the logo: 

* SVG format
* maximum width is 24mm
* the checkbox on the right side of the button needs to be checked (will be checked after clicking it). 
* the location is on the right bottom side of the Legal owner field of the Titleblock 
 
**Notes**  
Once the logo gets reaches a height of 30mm the width is reduced (the ratio will be kept). If text is included in the SVG it may create problems, so convert that to path.
