object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Phone'
  ClientHeight = 343
  ClientWidth = 638
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = TMainMenu
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 21
    Width = 28
    Height = 13
    Caption = 'Brand'
  end
  object Label2: TLabel
    Left = 16
    Top = 75
    Width = 28
    Height = 13
    Caption = 'Model'
  end
  object Label3: TLabel
    Left = 16
    Top = 128
    Width = 22
    Height = 13
    Caption = 'Year'
  end
  object Label4: TLabel
    Left = 16
    Top = 179
    Width = 23
    Height = 13
    Caption = 'Price'
  end
  object Edit1: TEdit
    Left = 16
    Top = 94
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
    Top = 40
    Width = 121
    Height = 21
    Style = csDropDownList
    ParentShowHint = False
    ShowHint = False
    TabOrder = 2
    Items.Strings = (
      'Apple'
      'Samsung'
      'Xiaomi')
  end
  object Edit2: TEdit
    Left = 16
    Top = 147
    Width = 121
    Height = 21
    TabOrder = 3
    Text = '0'
    TextHint = 'Year'
    OnKeyPress = Edit2KeyPress
  end
  object Edit3: TEdit
    Left = 16
    Top = 198
    Width = 121
    Height = 21
    TabOrder = 4
    Text = '0'
    TextHint = 'Price'
    OnKeyPress = Edit3KeyPress
  end
  object StringGrid1: TStringGrid
    Left = 160
    Top = 21
    Width = 457
    Height = 252
    TabOrder = 5
    OnSelectCell = StringGrid1SelectCell
  end
  object Button2: TButton
    Left = 528
    Top = 288
    Width = 89
    Height = 25
    Caption = 'Get price after'
    TabOrder = 6
    OnClick = Button2Click
  end
  object Edit4: TEdit
    Left = 401
    Top = 290
    Width = 121
    Height = 21
    TabOrder = 7
    Text = '0'
    TextHint = 'Years'
    OnKeyPress = Edit4KeyPress
  end
  object TMainMenu: TMainMenu
    Left = 104
    Top = 288
    object Object1: TMenuItem
      Caption = 'Object'
      object New1: TMenuItem
        Caption = 'New'
        OnClick = New1Click
      end
    end
  end
end
