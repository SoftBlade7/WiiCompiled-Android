#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D00B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D00B0;

loc_805D00B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead8((r3 + 21036));
    r28 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D00D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D030C;
    }
}

loc_805D00D4:
{
    r5 = MemoryInline::FlatRead32((r3 + 21024));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(512));
}

loc_805D00DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D00E8;
    }
}

loc_805D00E0:
{
    ctx->lr = 0x805D00E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D0674u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D030C;
}

loc_805D00E8:
{
    r6 = MemoryInline::FlatRead32((r3 + 21032));
    r0 = (r4 + 4096);
    r5 = (r5 * 40);
    r7 = 0;
    r0 = (r0 & 65535);
    r6 = (r6 * 28);
}

loc_805D0104:
{
    r31 = (r3 + r5);
    r30 = (r3 + r6);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_805D0114;
    }
}

loc_805D0110:
{
    r7 = 1;
}

loc_805D0114:
{
}

loc_805D0118:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805D0124;
    }
}

loc_805D011C:
{
    r29 = (r3 + 32);
    goto loc_805D0150;
}

loc_805D0124:
{
    r0 = (r4 + 3840);
    r5 = 0;
    r0 = (r0 & 65535);
}

loc_805D0134:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_805D013C;
    }
}

loc_805D0138:
{
    r5 = 1;
}

loc_805D013C:
{
}

loc_805D0140:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805D014C;
    }
}

loc_805D0144:
{
    r29 = (r3 + 52);
    goto loc_805D0150;
}

loc_805D014C:
{
    r29 = (r3 + 12);
}

loc_805D0150:
{
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_805D0160:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_805D0180;
    }
}

loc_805D0164:
{
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = (r5 + -1);
    r0 = (r0 * 24);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r27 = (r5 + r0);
    goto loc_805D0184;
}

loc_805D0180:
{
    r27 = 0;
}

loc_805D0184:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805D0188:
{
    MemoryInline::FlatWrite32((r31 + 112), r27);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D019C;
    }
}

loc_805D0190:
{
    r3 = r28;
    ctx->lr = 0x805D0198u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D0674u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D030C;
}

loc_805D019C:
{
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r4));
    r5 = r4;
    r4 = (r27 + 12);
    r26 = MemoryInline::FlatRead32(r29);
    r25 = MemoryInline::FlatRead32((r3 + 92));
    r3 = r26;
    ctx->lr = 0x805D01B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D1044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 32));
    MemoryInline::FlatWrite16((r27 + 8), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D01C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D01CC;
    }
}

loc_805D01C8:
{
    MemoryInline::FlatWrite16((r27 + 10), static_cast<uint16_t>(r25));
}

loc_805D01CC:
{
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r31 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 80));
    MemoryInline::FlatWriteFloat32((r31 + 104), f0.d);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead16((r31 + 108));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x805D0214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 16408));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20596));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D025C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0264;
    }
}

loc_805D0260:
{
    MemoryInline::FlatWriteFloat32((r30 + 20596), f1.d);
}

loc_805D0264:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20600));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D0278:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0280;
    }
}

loc_805D027C:
{
    MemoryInline::FlatWriteFloat32((r30 + 20600), f1.d);
}

loc_805D0280:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20592));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805D028C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D0294;
    }
}

loc_805D0290:
{
    MemoryInline::FlatWriteFloat32((r30 + 20592), f1.d);
}

loc_805D0294:
{
    r0 = MemoryInline::FlatRead32((r28 + 21028));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D029C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D02DC;
    }
}

loc_805D02A0:
{
    r3 = MemoryInline::FlatRead32((r28 + 21024));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    r0 = (r3 + -1);
    r0 = (r0 * 40);
    r3 = (r28 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805D02BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D02C4;
    }
}

loc_805D02C0:
{
    goto loc_805D02C8;
}

loc_805D02C4:
{
    f2.d = f0.d;
}

loc_805D02C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 84));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
}

loc_805D02DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 84));
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 100));
    r4 = MemoryInline::FlatRead32((r28 + 21024));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r3 = MemoryInline::FlatRead32((r28 + 21028));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 21024), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
    MemoryInline::FlatWrite32((r28 + 21028), r0);
}

loc_805D030C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D00B0 func_805D00B0 preserves=true fpr_mask=0x00000000
