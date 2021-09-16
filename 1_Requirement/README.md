# Requirements

### High Level Requirements

|  ID |  Description | Category  |  Status |   
|---|---|---|---|
| HR01  |Sensor should give output(LED Turn on or Off)  whether the person is seated or not in the vehicle   | Automatic  | IMPLEMENTED  |   
| HR02  | Temperature sensor should toggle the temperature  | Automatic  | IMPLEMENTED  |   
|  HR03 | Temperature is beyond threshold then turn Off or on AC  | Manual  | IMPLEMENTED  |   
| HR04  |display Temperature Value on LCD Screen   |  Automatic | IMPLEMENTED  |   
|  HR05 | Exit from the system when Vehicle is not moving  |  Automatic | IMPLEMENTED   |   

### Low Level Requirements

| ID  | Description  | HLR ID |  Status |   
|---|---|---|---|
| LR01  |Sensor output(LED Turn on or Off) will be in boolean form either 0 or 1   |HR01   | IMPLEMENTED  |   
| LR02  | System will tell user that temperature is switching  | HR02  | IMPLEMENTED  |   
| LR03  | user have to turn on or off the vehicle AC | HR03|  IMPLEMENTED   |   
| LR04  |  System will display the temperature value inside the vehicle | HR04  |  IMPLEMENTED |   
| LR05   | System will stopped working once vehicle is Stopped  | HR05  | Not IMPLEMENTED  |   
