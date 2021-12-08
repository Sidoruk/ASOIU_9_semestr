object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'MainForm'
  ClientHeight = 425
  ClientWidth = 884
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
    Left = 8
    Top = 31
    Width = 82
    Height = 31
    Caption = 'Filter by name:'
  end
  object Label2: TLabel
    Left = 632
    Top = 288
    Width = 31
    Height = 13
    Caption = 'Label2'
  end
  object ClientGrid: TDBGrid
    Left = 8
    Top = 68
    Width = 425
    Height = 125
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
        Width = 48
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'SurnameClient'
        Width = 85
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NameClient'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'StatusClient'
        Width = 78
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'PhoneClient'
        Visible = True
      end>
  end
  object addClientBtn: TButton
    Left = 30
    Top = 199
    Width = 75
    Height = 25
    Caption = 'Add client'
    TabOrder = 1
    OnClick = addClientBtnClick
  end
  object deleteBtn: TButton
    Left = 120
    Top = 199
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
    Left = 96
    Top = 28
    Width = 153
    Height = 25
    Hint = 'enter filter'
    TabOrder = 4
  end
  object FilterBtn: TButton
    Left = 263
    Top = 26
    Width = 75
    Height = 25
    Caption = 'Search'
    TabOrder = 5
    OnClick = FilterBtnClick
  end
  object CancelFilterBtn: TButton
    Left = 358
    Top = 26
    Width = 75
    Height = 25
    Caption = 'Clear filter'
    TabOrder = 6
    OnClick = CancelFilterBtnClick
  end
  object DishGrid: TDBGrid
    Left = 448
    Top = 68
    Width = 425
    Height = 120
    DataSource = DDish
    TabOrder = 7
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object addDishBtn: TButton
    Left = 480
    Top = 199
    Width = 75
    Height = 25
    Caption = 'Add dish'
    TabOrder = 8
    OnClick = addDishBtnClick
  end
  object deleteDishBtn: TButton
    Left = 569
    Top = 199
    Width = 75
    Height = 25
    Caption = 'Delete dish'
    TabOrder = 9
    OnClick = deleteDishBtnClick
  end
  object DBGrid1: TDBGrid
    Left = 18
    Top = 251
    Width = 567
    Height = 120
    DataSource = DZakaz
    TabOrder = 10
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object addZakazBtn: TButton
    Left = 30
    Top = 377
    Width = 75
    Height = 25
    Caption = 'Add zakaz'
    TabOrder = 11
    OnClick = addZakazBtnClick
  end
  object minDate: TDateTimePicker
    Left = 176
    Top = 384
    Width = 121
    Height = 21
    Date = 44538.000000000000000000
    Time = 0.161344479165563800
    TabOrder = 12
  end
  object maxDate: TDateTimePicker
    Left = 320
    Top = 384
    Width = 113
    Height = 21
    Date = 44538.000000000000000000
    Time = 0.161551805555063800
    TabOrder = 13
  end
  object searchByDate: TButton
    Left = 466
    Top = 384
    Width = 89
    Height = 21
    Caption = 'Search by date'
    TabOrder = 14
    OnClick = searchByDateClick
  end
  object clearFilter: TButton
    Left = 561
    Top = 384
    Width = 75
    Height = 21
    Caption = 'Clear filter'
    TabOrder = 15
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
  object TDish: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'dish'
    Left = 488
    Top = 144
  end
  object DDish: TDataSource
    DataSet = TDish
    Left = 536
    Top = 144
  end
  object TZakaz: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'idClient'
    TableName = 'zakaz'
    Left = 56
    Top = 272
    object TZakazidDish: TIntegerField
      DisplayWidth = 8
      FieldName = 'idDish'
    end
    object TZakazidClient: TIntegerField
      DisplayWidth = 7
      FieldName = 'idClient'
    end
    object TZakazcount: TIntegerField
      DisplayWidth = 7
      FieldName = 'count'
    end
    object TZakazdate: TDateField
      DisplayWidth = 10
      FieldName = 'date'
    end
    object TZakazSurnameClient: TStringField
      DisplayWidth = 17
      FieldKind = fkLookup
      FieldName = 'SurnameClient'
      LookupDataSet = TClient
      LookupKeyFields = 'idClient'
      LookupResultField = 'SurnameClient'
      KeyFields = 'idClient'
      Lookup = True
    end
    object TZakazNameClient: TStringField
      DisplayWidth = 15
      FieldKind = fkLookup
      FieldName = 'NameClient'
      LookupDataSet = TClient
      LookupKeyFields = 'idClient'
      LookupResultField = 'NameClient'
      KeyFields = 'idClient'
      Lookup = True
    end
    object TZakazDish: TStringField
      DisplayWidth = 13
      FieldKind = fkLookup
      FieldName = 'Dish'
      LookupDataSet = TDish
      LookupKeyFields = 'idDish'
      LookupResultField = 'nameDish'
      KeyFields = 'idDish'
      Lookup = True
    end
  end
  object DZakaz: TDataSource
    DataSet = TZakaz
    Left = 184
    Top = 280
  end
end
