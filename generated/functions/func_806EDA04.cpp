#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EDA04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_806EDD9C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EDA04;

loc_806EDA04:
{
    MemoryInline::FlatWriteRam32((r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    MemoryInline::FlatWriteRam32((r1 + 380), r31);
    MemoryInline::FlatWriteRam32((r1 + 376), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 372), r29);
    MemoryInline::FlatWriteRam32((r1 + 368), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EDA30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EDA50;
    }
}

loc_806EDA34:
{
    r4 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead16((r3 + 42));
    r3 = (r4 * r0);
    r0 = (r3 + 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    ctx->lr = 0x806EDA4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 56), r3);
}

loc_806EDA50:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 10), 0, 38u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r30 + 10));
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 60), r3);
}

loc_806EDA60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806EDE18;
    }
}

loc_806EDA64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_806EDA68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EDC18;
    }
}

loc_806EDA6C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r30 + 12));
    r3 = (r1 + 356);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 34u, (r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r30 + 12));
    r4 = (r5 + 16);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r4 = 0x808A0000u;
    r3 = (r1 + 344);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 2848));
    r4 = (r1 + 356);
    // inline leaf 0x806A62A4 (13 guest instruction(s))
    r5 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -10588));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x806A62A4
    r5 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r30 + 12));
    r3 = (r1 + 332);
    r4 = (r1 + 344);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r8 = MemoryInline::ReadResolved32(guest_range_1, 34u, (r30 + 44));
    r4 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 332));
    r3 = (r1 + 284);
    MemoryInline::FlatWriteFloat32((r8 + 12), f0.d);
    r5 = (r1 + 320);
    r6 = (r1 + 308);
    r7 = (r1 + 296);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 336));
    MemoryInline::FlatWriteFloat32((r8 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 340));
    MemoryInline::FlatWriteFloat32((r8 + 20), f0.d);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r30 + 12));
    guest_range_3 = MemoryInline::ResolveRangeHost(r9, 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 0u, r9);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r9 + 4));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    MemoryInline::FlatWriteRam32((r1 + 320), r8);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r9 + 8));
    MemoryInline::FlatWriteRam32((r1 + 328), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r9 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r9 + 20));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 312), r0);
    MemoryInline::FlatWriteRam32((r1 + 308), r8);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r9 + 24));
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r9 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r9 + 36));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
    MemoryInline::FlatWriteRam32((r1 + 296), r8);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r9 + 40));
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
    ctx->lr = 0x806EDB40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE4B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r3 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 288));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 292));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    r5 = MemoryInline::FlatRead32((r30 + 12));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r5 = MemoryInline::FlatRead32((r30 + 48));
    ctx->lr = 0x806EDB8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE56Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 2832));
    r31 = 1;
    MemoryInline::FlatWriteFloat32((r4 + 48), f1.d);
    r28 = 56;
    r29 = 16;
    r3 = MemoryInline::FlatRead32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    goto loc_806EDC08;
}

loc_806EDBBC:
{
    r5 = (r31 + -1);
    r4 = (r31 + 1);
    r3 = (r31 + 2);
    r9 = MemoryInline::FlatRead32((r30 + 12));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r7 = (r7_rot_2 & -16);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & -16);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & -16);
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r4 = (r9 + r5);
    r8 = MemoryInline::FlatRead32((r30 + 48));
    r3 = r30;
    r5 = (r9 + r29);
    r6 = (r9 + r6);
    r7 = (r9 + r7);
    r9 = (r0 + r28);
    ctx->lr = 0x806EDBFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE27Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 56);
    r29 = (r29 + 16);
    r31 = (r31 + 1);
}

loc_806EDC08:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_806EDC14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806EDBBC;
    }
}

loc_806EDC18:
{
    r5 = MemoryInline::FlatRead16((r30 + 42));
    r4 = r30;
    r9 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r1 + 236);
    r6 = (r5 + -1);
    r8 = MemoryInline::FlatRead32((r30 + 44));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r7 = (r7_rot_4 & -16);
    r5 = (r1 + 272);
    r9 = (r9 + r7);
    r0 = (r6 * 56);
    f0.d = MemoryInline::FlatReadFloat32(r9);
    r6 = (r1 + 260);
    r7 = (r1 + 248);
    r8 = (r8 + r0);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    r10 = MemoryInline::FlatRead16((r30 + 42));
    r31 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r10 + -2);
    r8 = (r10 + -1);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r9 = (r9_rot_0 & -16);
    r12 = (r31 + r9);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r8 = (r8_rot_0 & -16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r31_addr_0 = (r31 + r9);
    r11 = MemoryInline::FlatRead32(r31_addr_0);
    r10 = (r31 + r8);
    r8 = MemoryInline::FlatRead32((r12 + 4));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 248), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 276), r8);
    r9 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 272), r11);
    r0 = MemoryInline::FlatRead32((r12 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 280), r0);
    r8 = MemoryInline::FlatRead32(r10);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 264), r0);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 260), r8);
    }
    r0 = MemoryInline::FlatRead32((r10 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 268), r0);
    r8 = MemoryInline::FlatRead32(r9);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 252), r0);
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 248), r8);
    }
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 256), r0);
    ctx->lr = 0x806EDCD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE408u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 40u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 42));
    r3 = (r1 + 224);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 44));
    r0 = (r4 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 236));
    r0 = (r0 * 56);
    r4 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 240));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 244));
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 42));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 12));
    r4 = (r5 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_0 & -16);
    r4 = (r6 + r4);
    r5 = (r6 + r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r4 = 0x808A0000u;
    r3 = (r1 + 212);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 2848));
    r4 = (r1 + 224);
    // inline leaf 0x806A62A4 (13 guest instruction(s))
    r5 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -10588));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x806A62A4
    r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 42));
    r3 = (r1 + 200);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 12));
    r4 = (r1 + 212);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r5 = (r5 + r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r4 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 42));
    r3 = r30;
    r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 44));
    r0 = (r4 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 200));
    r0 = (r0 * 56);
    r4 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 204));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 208));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 42));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 12));
    r0 = (r4 + -1);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r5 = (r5_rot_4 & -16);
    r0 = (r0 * 56);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 44));
    addr_lfsux_806EDD9C_loc_0 = (r5 + r6);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_806EDD9C_loc_0);
    r5 = addr_lfsux_806EDD9C_loc_0;
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r30 + 42));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 44));
    r0 = (r4 + -1);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 48));
    r0 = (r0 * 56);
    r4 = (r6 + r0);
    ctx->lr = 0x806EDDD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE56Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead16((r30 + 42));
    r3 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r4 + -1);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 2832));
    r0 = (r0 * 56);
    r3 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r3 + -1);
    r0 = (r0 * 56);
    r3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    goto loc_806EE25C;
}

loc_806EDE18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_806EDE1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EE04C;
    }
}

loc_806EDE20:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r30 + 12));
    r4 = r30;
    r8 = MemoryInline::ReadResolved32(guest_range_1, 34u, (r30 + 44));
    r3 = (r1 + 152);
    f0.d = MemoryInline::FlatReadFloat32(r9);
    r5 = (r1 + 188);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    r6 = (r1 + 176);
    r7 = (r1 + 164);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r30 + 42));
    r10 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r30 + 12));
    r0 = (r8 + -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r9 = (r10 + r0);
    r10_addr_1 = (r10 + r0);
    r8 = MemoryInline::FlatRead32(r10_addr_1);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 164), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r1 + 192), r0);
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r1 + 188), r8);
    }
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::WriteResolved32(guest_range_6, 32u, (r1 + 196), r0);
    r8 = MemoryInline::FlatRead32(r10);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r1 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r1 + 176), r8);
    }
    r0 = MemoryInline::FlatRead32((r10 + 8));
    MemoryInline::WriteResolved32(guest_range_6, 20u, (r1 + 184), r0);
    r8 = MemoryInline::FlatRead32((r10 + 16));
    r0 = MemoryInline::FlatRead32((r10 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r1 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + 164), r8);
    }
    r0 = MemoryInline::FlatRead32((r10 + 24));
    MemoryInline::WriteResolved32(guest_range_6, 8u, (r1 + 172), r0);
    ctx->lr = 0x806EDEB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE408u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r8 = MemoryInline::FlatRead32((r30 + 44));
    r4 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    r3 = (r1 + 104);
    MemoryInline::FlatWriteFloat32((r8 + 12), f0.d);
    r5 = (r1 + 140);
    r6 = (r1 + 128);
    r7 = (r1 + 116);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::FlatWriteFloat32((r8 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteFloat32((r8 + 20), f0.d);
    r9 = MemoryInline::FlatRead32((r30 + 12));
    guest_range_4 = MemoryInline::ResolveRangeHost(r9, 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 0u, r9);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r9 + 4));
        }
    }
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 116), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r1 + 140), r8);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r9 + 8));
    MemoryInline::WriteResolved32(guest_range_7, 32u, (r1 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r9 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r9 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r1 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r1 + 128), r8);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r9 + 24));
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r1 + 136), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r9 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r9 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r1 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 116), r8);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r9 + 40));
    MemoryInline::WriteResolved32(guest_range_7, 8u, (r1 + 124), r0);
    ctx->lr = 0x806EDF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE4B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r3 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    r5 = MemoryInline::FlatRead32((r30 + 12));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r5 = MemoryInline::FlatRead32((r30 + 48));
    ctx->lr = 0x806EDF80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE56Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 2832));
    r31 = 1;
    MemoryInline::FlatWriteFloat32((r4 + 48), f1.d);
    r29 = 56;
    r28 = 16;
    r3 = MemoryInline::FlatRead32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    goto loc_806EE03C;
}

loc_806EDFB0:
{
    r5 = (r31 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r3));
}

loc_806EDFB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EDFFC;
    }
}

loc_806EDFBC:
{
    r0 = (r31 + -1);
    r3 = (r31 + 1);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    r9 = MemoryInline::FlatRead32((r30 + 12));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r6 = (r6_rot_5 & -16);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r7 = (r7_rot_6 & -16);
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r3 = r30;
    r8 = MemoryInline::FlatRead32((r30 + 48));
    r4 = (r9 + r4);
    r5 = (r9 + r28);
    r6 = (r9 + r6);
    r7 = (r9 + r7);
    r9 = (r0 + r29);
    ctx->lr = 0x806EDFF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE27Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806EE030;
}

loc_806EDFFC:
{
    r7 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r31 + -1);
    r3 = (r31 + 1);
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r6 = (r6_rot_6 & -16);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_4 & -16);
    r8 = MemoryInline::FlatRead32((r30 + 48));
    r3 = r30;
    r4 = (r7 + r4);
    r5 = (r7 + r28);
    r6 = (r7 + r6);
    r9 = (r0 + r29);
    ctx->lr = 0x806EE030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE27Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806EE030:
{
    r29 = (r29 + 56);
    r28 = (r28 + 16);
    r31 = (r31 + 1);
}

loc_806EE03C:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_806EE048:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806EDFB0;
    }
}

loc_806EE04C:
{
    r5 = MemoryInline::FlatRead16((r30 + 42));
    r4 = r30;
    r9 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r1 + 56);
    r6 = (r5 + -1);
    r8 = MemoryInline::FlatRead32((r30 + 44));
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r7 = (r7_rot_9 & -16);
    r5 = (r1 + 92);
    r9 = (r9 + r7);
    r0 = (r6 * 56);
    f0.d = MemoryInline::FlatReadFloat32(r9);
    r6 = (r1 + 80);
    r7 = (r1 + 68);
    r8 = (r8 + r0);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    r9 = MemoryInline::FlatRead16((r30 + 42));
    r11 = MemoryInline::FlatRead32((r30 + 12));
    r8 = (r9 + -2);
    r0 = (r9 + -1);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r8 = (r8_rot_1 & -16);
    r10 = (r11 + r8);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r9 = (r11 + r0);
    r11_addr_1 = (r11 + r8);
    r8 = MemoryInline::FlatRead32(r11_addr_1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 68), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 28u, (r1 + 96), r0);
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r1 + 92), r8);
    }
    r0 = MemoryInline::FlatRead32((r10 + 8));
    MemoryInline::WriteResolved32(guest_range_8, 32u, (r1 + 100), r0);
    r8 = MemoryInline::FlatRead32(r9);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r1 + 84), r0);
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r1 + 80), r8);
    }
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::WriteResolved32(guest_range_8, 20u, (r1 + 88), r0);
    r8 = MemoryInline::FlatRead32(r11);
    r0 = MemoryInline::FlatRead32((r11 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 4u, (r1 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_8, 0u, (r1 + 68), r8);
    }
    r0 = MemoryInline::FlatRead32((r11 + 8));
    MemoryInline::WriteResolved32(guest_range_8, 8u, (r1 + 76), r0);
    ctx->lr = 0x806EE100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE408u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead16((r30 + 42));
    r4 = r30;
    r8 = MemoryInline::FlatRead32((r30 + 44));
    r3 = (r1 + 8);
    r0 = (r5 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r0 = (r0 * 56);
    r5 = (r1 + 44);
    r6 = (r1 + 32);
    r7 = (r1 + 20);
    r8 = (r8 + r0);
    MemoryInline::FlatWriteFloat32((r8 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r8 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r8 + 20), f0.d);
    r8 = MemoryInline::FlatRead16((r30 + 42));
    r10 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r8 + -1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & -16);
    r9 = (r10 + r0);
    r10_addr_3 = (r10 + r0);
    r8 = MemoryInline::FlatRead32(r10_addr_3);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 44), r8);
    }
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 52), r0);
    r8 = MemoryInline::FlatRead32(r10);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 32), r8);
    }
    r0 = MemoryInline::FlatRead32((r10 + 8));
    MemoryInline::WriteResolved32(guest_range_9, 20u, (r1 + 40), r0);
    r8 = MemoryInline::FlatRead32((r10 + 16));
    r0 = MemoryInline::FlatRead32((r10 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 20), r8);
    }
    r0 = MemoryInline::FlatRead32((r10 + 24));
    MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 28), r0);
    ctx->lr = 0x806EE1A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE4B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 40u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r30 + 42));
    r3 = r30;
    r5 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r30 + 44));
    r0 = (r4 + -1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r0 = (r0 * 56);
    r4 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
    r4 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r30 + 42));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 12));
    r0 = (r4 + -1);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r30 + 44));
    r0 = (r0 * 56);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 44), f0.d);
    r4 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r30 + 42));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r30 + 44));
    r0 = (r4 + -1);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r30 + 48));
    r0 = (r0 * 56);
    r4 = (r6 + r0);
    ctx->lr = 0x806EE21Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EE56Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead16((r30 + 42));
    r3 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r4 + -1);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 2832));
    r0 = (r0 * 56);
    r3 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r4 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r3 + -1);
    r0 = (r0 * 56);
    r3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
}

loc_806EE25C:
{
    r0 = MemoryInline::FlatRead32((r1 + 388));
    r31 = MemoryInline::FlatRead32((r1 + 380));
    r30 = MemoryInline::FlatRead32((r1 + 376));
    r29 = MemoryInline::FlatRead32((r1 + 372));
    r28 = MemoryInline::FlatRead32((r1 + 368));
    ctx->lr = r0;
    r1 = (r1 + 384);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806EDA04 func_806EDA04 preserves=true fpr_mask=0x00000000
