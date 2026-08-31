#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800909E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800909E0;

loc_800909E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead8((r13 + -27200));
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r27 = r6;
    r28 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80090A60;
    }
}

loc_80090A14:
{
    r6 = 0x802D0000u;
    r0 = 0;
    r3 = (r6 + 22648);
    r4 = 0x80090000u;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r0);
    r7 = (r3 + 8);
    r5 = 0x802D0000u;
    r4 = (r4 + -1552);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    r5 = (r5 + 22632);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r6 + 22648), r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r7);
    }
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27200), static_cast<uint8_t>(r0));
}

loc_80090A60:
{
    r31 = 0x802D0000u;
    r31 = (r31 + 22648);
    r3 = r31;
    ctx->lr = 0x80090A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80095A90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80090A74:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80090A84;
    }
}

loc_80090A7C:
{
    r30 = 0;
    goto loc_80090ACC;
}

loc_80090A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80090ACC;
    }
}

loc_80090A88:
{
    // inline leaf 0x800916C0 (17 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28656));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    r5 = 0x80250000u;
    r5 = (r5 + -28384);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28652));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 508));
    r0 = 127;
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteRam16((r3 + 22), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800916C0
    r3 = (r30 + 28);
    // inline leaf 0x80095B40 (9 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28384));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28380));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x80095B40
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 44), 0, 208u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 48), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r30 + 53), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r30 + 54), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r30 + 55), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 144u, (r30 + 188), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 145u, (r30 + 189), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 146u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 146u, (r30 + 190), r0);
        MemoryInline::WriteResolved16(guest_range_1, 148u, (r30 + 192), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 192u, (r30 + 236), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r30 + 244), r0);
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 248), r0);
    }
}

loc_80090ACC:
{
    r0 = (r31 + 8);
    r29 = (r30 + 244);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = r29;
    r3 = (r31 + 4);
    r4 = (r1 + 8);
    // inline leaf 0x800AF340 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r6);
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r6, r5);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32(r3, r0);
    r3 = r5;
    // end of inlined leaf 0x800AF340
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80090AEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80090AF8;
    }
}

loc_80090AF0:
{
    r3 = 0;
    goto loc_80090BC4;
}

loc_80090AF8:
{
    r31 = 1;
    MemoryInline::FlatWrite8((r30 + 55), static_cast<uint8_t>(r31));
    ctx->lr = 0x80090B04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AC440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r7 = 0x80090000u;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r8 = r30;
    r7 = (r7 + 2192);
    ctx->lr = 0x80090B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AC6E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80090B24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80090BAC;
    }
}

loc_80090B28:
{
    r0 = MemoryInline::FlatRead8((r13 + -27200));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80090B7C;
    }
}

loc_80090B34:
{
    r6 = 0x802D0000u;
    r0 = 0;
    r3 = (r6 + 22648);
    r4 = 0x80090000u;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r0);
    r7 = (r3 + 8);
    r5 = 0x802D0000u;
    r4 = (r4 + -1552);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    r5 = (r5 + 22632);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r6 + 22648), r0);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r7);
    }
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    MemoryInline::FlatWrite8((r13 + -27200), static_cast<uint8_t>(r31));
}

loc_80090B7C:
{
    r31 = 0x802D0000u;
    r4 = r29;
    r31 = (r31 + 22648);
    r3 = (r31 + 4);
    // inline leaf 0x800AF370 (12 guest instruction(s))
    r6 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r5);
    MemoryInline::FlatWrite32(r5, r6);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + -1);
    MemoryInline::FlatWriteRam32(r3, r5);
    r3 = r6;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    // end of inlined leaf 0x800AF370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80090B94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80090BA4;
    }
}

loc_80090B98:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x80090BA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80095AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80090BA4:
{
    r3 = 0;
    goto loc_80090BC4;
}

loc_80090BAC:
{
    MemoryInline::FlatWrite32((r30 + 236), r3);
    r3 = r30;
    r4 = r27;
    r5 = r28;
    ctx->lr = 0x80090BC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8008FCE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = r30;
}

loc_80090BC4:
{
    r11 = (r1 + 48);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -4));
    }
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
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800909E0 func_800909E0 preserves=true fpr_mask=0x00000000
