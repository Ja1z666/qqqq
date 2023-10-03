object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 336
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 16
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = 'Model'
  end
  object Button1: TButton
    Left = 16
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Submit'
    TabOrder = 1
    OnClick = Button1Click
  end
  object ComboBox1: TComboBox
    Left = 16
    Top = 21
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = 'Brand'
    Items.Strings = (
      'Apple'
      'Samsung'
      'Xiaomi')
  end
  object Edit2: TEdit
    Left = 16
    Top = 75
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = 'Year'
  end
  object Edit3: TEdit
    Left = 16
    Top = 102
    Width = 121
    Height = 21
    TabOrder = 4
    TextHint = 'Price'
  end
  object StringGrid1: TStringGrid
    Left = 160
    Top = 21
    Width = 457
    Height = 292
    TabOrder = 5
  end
end
