/**
*****************************************************************************
* @section LICENSE
*  ----------------------------------------------------------------------------
*****************************************************************************
*/

#include "StdString.hpp"

#include <vector>
#include <cstdlib>
#include <iostream>

namespace KDeTLearning {

const std::vector<std::string>ArrayOfStrings{
  aVarkQljr6UYadDY0R3geJlllUPMw3W4a3TC,
  aVarljPb9YfedX9JLIu729pNUIMaQIcj7nJC,
  aVar0q5W4xC4lQpVkVLX7z0b0B7ofEQt8IB0,
  aVarwxiHy6C1qAJVaLPROaDyRGk7S9hPPR8H,
  aVarhy6tkl3vioYTcoFzDcIZJcISt5WEfBle,
  aVar4qnhZhx7UXMXCkU3CDrqnPrvtn4uUysI,
  aVarNEj3xtXYzf3l8bXbUBVsuTYznnzsAzQr,
  aVarZXqPBvI1miXnkwJra9pUbgkASg1YHOuY,
  aVarpVNvQxOMW3WHtZFFUUw5zhgt9Vdk2rJc,
  aVarH8XYWsbhEnFXrcSehvUgNbnCJSaWXXEj,
  aVarSyUQfLcR5GFmLp7zj3x8JBK5U62pTk6s,
  aVarnrivFHQeoOeuE9O0XJLp6eICJBqIFDZM,
  aVariwQJ5zLpyeglqiyRJKWf9GlPNXEu2R9A,
  aVartVV39X9fAsWdFarTRpjZArkZzR2wpGP9,
  aVargWpOAaJwvy1wEzwMjJvd5eAAinpL1mLd,
  aVarip8WNalJoySjGvtoMNqfy3sWd5373V3e,
  aVarAFEG1jOmfuT0IVwKMmZlo9CFwwr743FL,
  aVaraRFlGBW8BpfvXcOivu06WyuObmxrIqgs,
  aVarIrKubRSizz6B4EDJxGB4rf9tRVZNiIP8,
  aVar1u5K1RqAmfowyp0QdcJ7FZPp84yFy16l,
  aVard2bnSIrQoBC6GfohOor4mQ1kAA7NQ2jt,
  aVarioe5iqap1tx7SEiZM2vDU16kmGllxepb,
  aVarv0ED5vpDjQhC19yxemTtjeGjNyNUfi92,
  aVarRHgwrrTS9lnBbQ2Z3Lz2HaQywRWJBMaQ,
  aVarD6aCW8ibUAlUzuqFEfviBiSvEH0VMXq9,
  aVarlBQzH6HlOmmC6sIikjh5fESqu6VzDKRX,
  aVarO6hFDJhbStWKOgu8LCqvrplx2PrM7WAv,
  aVar8pBUn2rMsACoUqGHOOgZauc6kfTud14Z,
  aVarseZWQ1hyvwjBW5MQ2HKk5vbjcZmB5pf6,
  aVar43xKW7qLIKTqz4Om1aG9RtyLkpqk60QJ,
  aVarynSOyGIvSCZ1rBSNePCn7NOrniBdeo76,
  aVarbpeqmBubvIxPprsSqxbkzj0GsT7Zzp06,
  aVarJp2a0nP5WPCie2miWExyOB4xfYgMVHtk,
  aVarQs3gaWYmKOV7OHHWvb3jgOAC9IeWCQrg,
  aVarJKKazaCbE707RQHz2gXuDzdxqecFh49X,
  aVarTD9IWn29y2urIG9hWNFdT9ro6j0VK3Ke,
  aVaruNdfCh1Fmq9Dxw3mcCTVDSbeHAmR3u8o,
  aVarOIchVeD5n6g1Ds1HhKlbM4vheq1VZcSJ,
  aVarvWTXtLXctkH7N5fXFjbRfKff9yr3xD0a,
  aVarnDwdWct1RXgPSaOWsWRIr0HRNo7lUINS,
  aVarwEx9xFlt5wWkTqPQR71KheYYAPOSoJf1,
  aVar18czOjyHWoVlqINybLcIe6b2RDCLHoJv,
  aVarMvs4gEXbWLCRpgSZBMomPemk79pgVlIA,
  aVarAY8jqCSJl1J7dIvuU890xtnWc8Aek8LT,
  aVariDXe3pNvIOGwJEfWXteNLMlYyO1viEnn,
  aVargLOnorVvrf383OTfyyQYRNeV0z17EsDs,
  aVarubJKY8YzAxkBn0VHckyejte4DAm5JxUM,
  aVarxpm9GPRqQYlyDcYsECMADSXSP4dW7WTg,
  aVarPJ8cwJZdR7b2YgftbOtPIbTYOthv6AYg,
  aVarlPZuORggwLUeVgrDhzHNp3RO92DN7oT8,
  aVarefdOV9H21YLMgoMzllrTBh0e9cJ1nDdY,
  aVarIVxFb2qlCcUO9cR0orlU4vdWlxUvp8ca,
  aVarZftyPnhMuSFxBcQXLkNrM5sj6NSd8jeI,
  aVarDImLwCmt1LZjdadjYSO6Ff3wDh4pDtD6,
  aVarhZ4jW7NTuuTmnx39zXWDCavCf8TcHe0l,
  aVar9sgqZyfGrPFJTL4fpiZobv5dQBN1H1SJ,
  aVarrQtpSiVrRa7n6759dzbCTjapmPQAdRdl,
  aVar8crMDXYDtbhWMkNnb4EaDnkAhV3pdoXk,
  aVarINekuVP1yHKAatzZiFlP8IRQ4b72HcSU,
  aVarBMp6xUuLuU6HGvsbmJrWMom1pSm64Ym9,
  aVar0eCFkdxrmsA93SMkk7OdtRNVQMA75LSr,
  aVary4GnD40Lyyn3ZLCBIbcUgsJyZkkqNloV,
  aVarSD5jwZr4vVHiIoza6O9WKB6bq298kpcQ,
  aVar5grOUrgzAdvO1Dp1GQU8qAr7Pm2T9L1B,
  aVarWDiKmw1qeEEbGx7QlvA91H4n7gB15oRE,
  aVar0baR9kTXjAv8uWszE2Dw4D4eeyuuFT3a,
  aVarFi9GCsA5IbiDNguMUd3G2Vorw5K1dbVq,
  aVaruGMqthxnnBTKZK76ZGXtNIJ3I5S3ZnPd,
  aVartoDJmcHynxZaGklxC68FCMfKmlZZLNaL,
  aVarCTmPRKWlwLrZLm7wgN7wkPiCl2F0TLip,
  aVarNjZW3oudVUbrWGLumLTuPQqBS4xPDUVb,
  aVar2eD1gwu48TLDVfdjM8gmoS8MC4rFW8qF,
  aVarheS6tcUmlIkisMCTmxaLFgO1eX3eL2SP,
  aVarDX97GPai6IXL8Pdix5OB1yicyrMKFBHZ,
  aVarwU2IXBfzQvItV5k1JIY3cXkQtuSLqfZD,
  aVarILhJ3SxX53mfYJWGgnrMsg3scg8hVklE,
  aVar38P1G4fm5pUdQXboZ7zDXN23AsyTZMCc,
  aVarZ9HVHitNZVEfrISlUE3RLjBVyRIdTHBt,
  aVarb9I4vPiuUZqIsH2Y2p0PYKPnGc6GK5d7,
  aVarZPQ1cIlzZZINk6ZlhwBZhCR7zW85OZSM,
  aVarVZbqip1MglqDqNHI5WsRZQcPLD3ZR22m,
  aVaroqz6102YgfzVWJ7cMfNxoa9koSwnreIo,
  aVarVdeP5CUyvEGLT2VDBBFxEdKisX66paRw,
  aVarAmIEv0ugOcxVsoCClTFDxrM7QMton2Cl,
  aVarG9Ya7Ymb2H1MN7oZkXySeo0Ov0c9U53M,
  aVarHHkCWa820gJE5HwGCgP3XI4yhKvTzagC,
  aVarTwpAFD6MrFsXxGJNo77iEfcMBL5EOyO3,
  aVarzaeZiRLR2JihjY1rwZAihsgcnc3kKEMJ,
  aVarDhzAbdK4aWhVx1AavwbkZvAkulFgve5s,
  aVarWgrJAlx91e1OZIpkt0QwjIWbWIJNxOoT,
  aVar5MHLLP8wUaJ8wYJW6yL4MUxJAwMyZFWd,
  aVarpwRBQta6Reas6Amub7fDqOG1SKPZNJZF,
  aVare03Jn4JN4k1C1xLZWkstGI668JsDzBCH,
  aVarZ2slld2lIKXXWCfN2tl4JMhubv69W0Rk,
  aVarLrXuT5WQeMF0bqggrRvtbXs1aK0xkt4i,
  aVarF5PzIVlHEjFAnKTf3ElMIyWYYvS944th,
  aVariy5Bltp2DCLokXC4hozv6WR7b9qbdv7C,
  aVarYtYfbnamH4wxnHEJKeaae7b6wThYlbmq,
  aVar2cnwjJLeDZB6fn4RZ3WDRL6USTCURZMk,
  aVar0laF260nzzVJg9S5T8Aptd34IkfjuEBs };

}//close namespace 

int main(int argumentCount, char *argumentVector[])
{
  int returnCode = EXIT_SUCCESS;

  for(auto &string : KDeTLearning::ArrayOfStrings) {
    std::cout << string << std::endl;
  }

  return returnCode;

}
