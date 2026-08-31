#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805201B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805201B0;

loc_805201B0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r31 = 0x80890000u;
    r31 = (r31 + -848);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r6);
    r0 = (r0 & -129);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r6);
    r0 = (r0 & -129);
    MemoryInline::FlatWrite8((r5 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8052020C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805206D4;
    }
}

loc_80520210:
{
    r3 = 0x809C0000u;
    r4 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r5 = (r28 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80524628u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead8((r28 + 80));
}

loc_8052022C:
{
    r0 = r4;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80520240;
    }
}

loc_80520234:
{
}

loc_80520238:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80520240;
    }
}

loc_8052023C:
{
    r0 = 1;
}

loc_80520240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80520244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805206D0;
    }
}

loc_80520248:
{
}

loc_8052024C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805206C4;
    }
}

loc_80520250:
{
    r4 = MemoryInline::FlatRead8((r28 + 150));
}

loc_80520258:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(150))) {
        goto loc_80520268;
    }
}

loc_8052025C:
{
    r4 = MemoryInline::FlatRead16((r28 + 144));
    r4 = (r4 | 64);
    MemoryInline::FlatWrite16((r28 + 144), static_cast<uint16_t>(r4));
}

loc_80520268:
{
    r4 = MemoryInline::FlatRead8((r28 + 151));
}

loc_80520270:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(150))) {
        goto loc_80520280;
    }
}

loc_80520274:
{
    r4 = MemoryInline::FlatRead16((r28 + 144));
    r4 = (r4 | 32);
    MemoryInline::FlatWrite16((r28 + 144), static_cast<uint16_t>(r4));
}

loc_80520280:
{
    r5 = MemoryInline::FlatRead16((r28 + 144));
    r8 = 0;
    r4 = MemoryInline::FlatRead16((r28 + 168));
    r6 = (r5 & 256);
}

loc_80520290:
{
    r4 = (r5 & ~r4);
    r9 = (r4 & 65535);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805202A0;
    }
}

loc_8052029C:
{
    r8 = (r8 | 1);
}

loc_805202A0:
{
    r7 = (r5 & 544);
}

loc_805202A4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805202B0;
    }
}

loc_805202A8:
{
    r4 = (r8 | 2);
    r8 = (r4 & 65535);
}

loc_805202B0:
{
    r4 = (r5 & 64);
}

loc_805202B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805202C0;
    }
}

loc_805202B8:
{
    r4 = (r8 | 4);
    r8 = (r4 & 65535);
}

loc_805202C0:
{
}

loc_805202C4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805202F8;
    }
}

loc_805202C8:
{
}

loc_805202CC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805202F8;
    }
}

loc_805202D0:
{
    r4 = (r9 & 544);
}

loc_805202D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805202E0;
    }
}

loc_805202D8:
{
    r4 = 1;
    MemoryInline::FlatWrite8((r28 + 170), static_cast<uint8_t>(r4));
}

loc_805202E0:
{
    r4 = MemoryInline::FlatRead8((r28 + 170));
}

loc_805202E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80520300;
    }
}

loc_805202EC:
{
    r4 = (r8 | 8);
    r8 = (r4 & 65535);
    goto loc_80520300;
}

loc_805202F8:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r28 + 170), static_cast<uint8_t>(r4));
}

loc_80520300:
{
    r4 = MemoryInline::FlatRead16((r28 + 144));
    r4 = (r4 & 1040);
}

loc_80520308:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80520314;
    }
}

loc_8052030C:
{
    r4 = (r8 | 32);
    r8 = (r4 & 65535);
}

loc_80520314:
{
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r8));
    r4 = (r9 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8052031C:
{
    r4 = MemoryInline::FlatRead16((r28 + 144));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052036C;
    }
}

loc_80520328:
{
    r5 = 1;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_80520340:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80520364;
    }
}

loc_80520344:
{
}

loc_80520348:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_80520358;
    }
}

loc_8052034C:
{
}

loc_80520350:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_80520360;
    }
}

loc_80520354:
{
    goto loc_80520364;
}

loc_80520358:
{
    r5 = 4;
    goto loc_80520364;
}

loc_80520360:
{
    r5 = 3;
}

loc_80520364:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
    goto loc_8052044C;
}

loc_8052036C:
{
    r4 = (r9 & 4);
}

loc_80520370:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805203B8;
    }
}

loc_80520374:
{
    r5 = 2;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8052038C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805203B0;
    }
}

loc_80520390:
{
}

loc_80520394:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_805203A4;
    }
}

loc_80520398:
{
}

loc_8052039C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_805203AC;
    }
}

loc_805203A0:
{
    goto loc_805203B0;
}

loc_805203A4:
{
    r5 = 4;
    goto loc_805203B0;
}

loc_805203AC:
{
    r5 = 3;
}

loc_805203B0:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
    goto loc_8052044C;
}

loc_805203B8:
{
    r4 = (r9 & 2);
}

loc_805203BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80520404;
    }
}

loc_805203C0:
{
    r5 = 4;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_805203D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805203FC;
    }
}

loc_805203DC:
{
}

loc_805203E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_805203F0;
    }
}

loc_805203E4:
{
}

loc_805203E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_805203F8;
    }
}

loc_805203EC:
{
    goto loc_805203FC;
}

loc_805203F0:
{
    r5 = 4;
    goto loc_805203FC;
}

loc_805203F8:
{
    r5 = 3;
}

loc_805203FC:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
    goto loc_8052044C;
}

loc_80520404:
{
    r4 = (r9 & 1);
}

loc_80520408:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052044C;
    }
}

loc_8052040C:
{
    r5 = 3;
    MemoryInline::FlatWrite8((r29 + 19), static_cast<uint8_t>(r5));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_80520424:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80520448;
    }
}

loc_80520428:
{
}

loc_8052042C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8052043C;
    }
}

loc_80520430:
{
}

loc_80520434:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_80520444;
    }
}

loc_80520438:
{
    goto loc_80520448;
}

loc_8052043C:
{
    r5 = 4;
    goto loc_80520448;
}

loc_80520444:
{
    r5 = 3;
}

loc_80520448:
{
    MemoryInline::FlatWrite8((r29 + 18), static_cast<uint8_t>(r5));
}

loc_8052044C:
{
    r6 = MemoryInline::FlatRead8((r28 + 146));
    r5 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 24), 0, 40u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r31 + 48));
    r4 = 0x809C0000u;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 56));
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -10496));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword0;
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_8052049C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805204C8;
    }
}

loc_805204A0:
{
    r4 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = (-(f0.d));
    goto loc_805204E8;
}

loc_805204C8:
{
    r4 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_805204E8:
{
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    r5 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -10496));
    r4 = 0;
    r6 = MemoryInline::FlatRead8((r28 + 147));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r31 + 48));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 56));
    r5 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 32));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 60));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword1;
    MemoryInline::FlatWrite8((r29 + 17), static_cast<uint8_t>(r5));
    r5 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    r6 = MemoryInline::FlatRead8((r28 + 148));
    r5 = MemoryInline::FlatRead8((r28 + 149));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 160), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 164), f0.d);
    r5 = MemoryInline::FlatRead8((r29 + 20));
    r5 = (r5 | 128);
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead16((r28 + 144));
    r5 = (r6 & 256);
}

loc_805205AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805205B4;
    }
}

loc_805205B0:
{
    r4 = (r4 | 1);
}

loc_805205B4:
{
    r5 = (r6 & 512);
}

loc_805205B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805205C4;
    }
}

loc_805205BC:
{
    r4 = (r4 | 2);
    r4 = (r4 & 65535);
}

loc_805205C4:
{
    r5 = (r6 & 4096);
}

loc_805205C8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805205D4;
    }
}

loc_805205CC:
{
    r4 = (r4 | 4);
    r4 = (r4 & 65535);
}

loc_805205D4:
{
    r5 = (r6 & 8);
}

loc_805205D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805205E4;
    }
}

loc_805205DC:
{
    r4 = (r4 | 8);
    r4 = (r4 & 65535);
}

loc_805205E4:
{
    r5 = (r6 & 4);
}

loc_805205E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805205F4;
    }
}

loc_805205EC:
{
    r4 = (r4 | 16);
    r4 = (r4 & 65535);
}

loc_805205F4:
{
    r5 = (r6 & 1);
}

loc_805205F8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80520604;
    }
}

loc_805205FC:
{
    r4 = (r4 | 32);
    r4 = (r4 & 65535);
}

loc_80520604:
{
    r5 = (r6 & 2);
}

loc_80520608:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80520614;
    }
}

loc_8052060C:
{
    r4 = (r4 | 64);
    r4 = (r4 & 65535);
}

loc_80520614:
{
    r5 = (r6 & 1040);
}

loc_80520618:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80520624;
    }
}

loc_8052061C:
{
    r4 = (r4 | 256);
    r4 = (r4 & 65535);
}

loc_80520624:
{
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r4));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead8((r29 + 16));
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead8((r4 + 16725));
}

loc_80520648:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80520670;
    }
}

loc_8052064C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = (-(f0.d));
    goto loc_8052068C;
}

loc_80520670:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8052068C:
{
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r4 = MemoryInline::FlatRead8((r30 + 48));
    r5 = MemoryInline::FlatRead8((r29 + 17));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r4 = (r4 | 128);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 48), static_cast<uint8_t>(r4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_805206C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_805206C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805206D0;
    }
}

loc_805206CC:
{
    r0 = 0;
}

loc_805206D0:
{
    MemoryInline::FlatWrite8((r28 + 80), static_cast<uint8_t>(r0));
}

loc_805206D4:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWrite16((r28 + 168), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00003FB gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805201B0 func_805201B0 preserves=true fpr_mask=0x00000000
