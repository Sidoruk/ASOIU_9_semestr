object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'MainForm'
  ClientHeight = 358
  ClientWidth = 664
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 184
    Top = 31
    Width = 82
    Height = 31
    Caption = 'Filter by name:'
  end
  object ClientGrid: TDBGrid
    Left = 8
    Top = 68
    Width = 601
    Height = 177
    DataSource = DClient
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'idClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'SurnameClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NameClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'StatusClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'PhoneClient'
        Visible = True
      end>
  end
  object addClientBtn: TButton
    Left = 40
    Top = 251
    Width = 75
    Height = 25
    Caption = 'Add client'
    TabOrder = 1
    OnClick = addClientBtnClick
  end
  object deleteBtn: TButton
    Left = 144
    Top = 251
    Width = 75
    Height = 25
    Caption = 'Delete client'
    TabOrder = 2
    OnClick = DeleteBtnClick
  end
  object Edit1: TEdit
    Left = 104
    Top = 224
    Width = 1
    Height = 21
    TabOrder = 3
    Text = 'Edit1'
  end
  object FilterEdit: TEdit
    Left = 272
    Top = 28
    Width = 153
    Height = 25
    Hint = 'enter filter'
    TabOrder = 4
  end
  object FilterBtn: TButton
    Left = 439
    Top = 26
    Width = 75
    Height = 25
    Caption = 'Search'
    TabOrder = 5
    OnClick = FilterBtnClick
  end
  object CancelFilterBtn: TButton
    Left = 534
    Top = 26
    Width = 75
    Height = 25
    Caption = 'Clear filter'
    TabOrder = 6
    OnClick = CancelFilterBtnClick
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=root;Exte' +
      'nded Properties="DSN=MySQL ASOIU;SERVER=localhost;UID=root;DATAB' +
      'ASE=asoiu;PORT=3306";Initial Catalog=asoiu'
    Left = 32
    Top = 136
  end
  object TClient: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'idClient'
    TableName = 'client'
    Left = 80
    Top = 136
  end
  object DClient: TDataSource
    DataSet = TClient
    Left = 128
    Top = 136
  end
end
