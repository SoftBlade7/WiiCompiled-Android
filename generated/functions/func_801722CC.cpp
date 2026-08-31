#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801722CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mdest_4 = 0;
    uint32_t r7_mdest_5 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_mrot_4 = 0;
    uint32_t r7_mrot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[14];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801722CC;

loc_801722CC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r8 = 0;
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = (r3 & 7);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r30 = (r30_rot_0 & 1);
}

loc_801722F8:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80172350;
    }
}

loc_80172308:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_8017230C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172318;
    }
}

loc_80172310:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80172314:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80172328;
    }
}

loc_80172318:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26664));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_80172440;
}

loc_80172328:
{
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26660));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f6.d));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_80172440;
}

loc_80172350:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_80172354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172360;
    }
}

loc_80172358:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8017235C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80172370;
    }
}

loc_80172360:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26664));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26656));
    f31.d = f3.d;
    goto loc_8017238C;
}

loc_80172370:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f0.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
}

loc_8017238C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26656));
    r28 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -26648));
    goto loc_801723A4;
}

loc_8017239C:
{
    f4.d = PpcFmulsInline(f4.d, f1.d);
    r28 = (r28 + 1);
}

loc_801723A4:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_801723A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8017239C;
    }
}

loc_801723AC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -26632));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26640));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26664));
    goto loc_801723C4;
}

loc_801723BC:
{
    f4.d = PpcFmulsInline(f4.d, f2.d);
    r28 = (r28 + -1);
}

loc_801723C4:
{
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_801723C8:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801723D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801723DC;
    }
}

loc_801723D4:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_801723D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801723BC;
    }
}

loc_801723DC:
{
    r0 = (r28 + 1);
    r3 = 1;
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26624));
    r0 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26616));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = (r28 + 1);
    r8 = 0;
    r8_mrot_1 = (r3 & 16777215);
    r8_mdest_1 = (r8 & -16777216);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r9 = 0;
    r9_mrot_1 = (r0 & 31);
    r9_mdest_1 = (r9 & -32);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r3 = 239;
    r0 = 240;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r8_mrot_2 = (r8_rot_1 & -16777216);
    r8_mdest_2 = (r8 & 16777215);
    r8 = (r8_mdest_2 | r8_mrot_2);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r9_mrot_2 = (r9_rot_1 & -16777216);
    r9_mdest_2 = (r9 & 16777215);
    r9 = (r9_mdest_2 | r9_mrot_2);
}

loc_80172440:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 12));
    r4 = -872349696;
    r5 = 97;
    r0 = 238;
    r6 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r6_mrot_0 = (r6_rot_0 & 2047);
    r6_mdest_0 = (r6 & -2048);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r6_mrot_1 = (r6_rot_1 & 522240);
    r6_mdest_1 = (r6 & -522241);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r7 = 0;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r6_mrot_2 = (r6_rot_2 & 524288);
    r6_mdest_2 = (r6 & -524289);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r3 = 241;
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_3 = (r6_rot_3 & -16777216);
    r6_mdest_3 = (r6 & 16777215);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r7_mrot_0 = (r7_rot_0 & 2047);
    r7_mdest_0 = (r7 & -2048);
    r7 = (r7_mdest_0 | r7_mrot_0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r7_mrot_1 = (r7_rot_1 & 522240);
    r7_mdest_1 = (r7 & -522241);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r7_mrot_2 = (r7_rot_2 & 524288);
    r7_mdest_2 = (r7 & -524289);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r0 = MemoryInline::FlatRead32(r29);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(20));
    r7_mrot_3 = (r7_rot_3 & 1048576);
    r7_mdest_3 = (r7 & -1048577);
    r7 = (r7_mdest_3 | r7_mrot_3);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(21));
    r7_mrot_4 = (r7_rot_4 & 14680064);
    r7_mdest_4 = (r7 & -14680065);
    r7 = (r7_mdest_4 | r7_mrot_4);
    r6 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r8));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r7_mrot_5 = (r7_rot_5 & -16777216);
    r7_mdest_5 = (r7 & 16777215);
    r7 = (r7_mdest_5 | r7_mrot_5);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_4 = (r6_rot_4 & 16777215);
    r6_mdest_4 = (r6 & -16777216);
    r6 = (r6_mdest_4 | r6_mrot_4);
    r0 = 242;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_5 = (r6_rot_5 & -16777216);
    r6_mdest_5 = (r6 & 16777215);
    r6 = (r6_mdest_5 | r6_mrot_5);
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 0;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r9);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r5);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r5);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 14u);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 32));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000031F gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x8000007F fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801722CC func_801722CC preserves=false fpr_mask=0x80000000
