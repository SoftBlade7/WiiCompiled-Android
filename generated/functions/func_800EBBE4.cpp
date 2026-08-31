#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EBBE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_13 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mdest_8 = 0;
    uint32_t r3_mdest_9 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_mrot_8 = 0;
    uint32_t r3_mrot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800EBBE4;

loc_800EBBE4:
{
    MemoryInline::FlatWriteRam32((r1 + -1120), r1);
    r1 = (r1 + -1120);
    r0 = ctx->lr;
    r5 = 64;
    MemoryInline::FlatWriteRam32((r1 + 1124), r0);
    MemoryInline::FlatWriteRam32((r1 + 1116), r31);
    MemoryInline::FlatWriteRam32((r1 + 1112), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 1108), r29);
    r29 = r4;
    r4 = 0;
    ctx->lr = 0x800EBC10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 64;
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r3);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    MemoryInline::FlatWrite32((r30 + 36), r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = r4;
    r29 = 0;
    // inline leaf 0x800ED66C (5 guest instruction(s))
    r4 = 0x802F0000u;
    r4 = (r4 + 7352);
    r3 = MemoryInline::FlatRead32((r4 + 432));
    r4 = MemoryInline::FlatRead32((r4 + 436));
    // end of inlined leaf 0x800ED66C
    r0 = (r3 & -2048);
}

loc_800EBC38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EBC4C;
    }
}

loc_800EBC3C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 & -2048);
    r0 = (r0 | r3);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_800EBC4C:
{
    r5 = 1812463616;
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r8 = (r5 + -30363);
    r3 = 1566113792;
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r31) * static_cast<uint64_t>(r8)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_0 & 2097148);
    r7 = (r3 + -29851);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    r9 = (r0 | 1);
    r3 = 2555904;
    r6 = (r29 * r8);
    r0 = (r9 & -2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800EBC7C:
{
    r4 = (r3 + -24893);
    r3 = 0;
    r0 = (r31 * r8);
    r6 = (r5 + r6);
    r5 = (r31 * r7);
    r0_addc_left_0 = r0;
    r0 = (r0_addc_left_0 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r6 + r5);
    r0_adde_left_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_0 + r3);
    r0 = (r0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r30 + 12), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800EBCB4;
    }
}

loc_800EBCA4:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(11));
    r0 = (r0_rot_1 & -2048);
    r0_mrot_1 = (r3 & 2047);
    r0_mdest_1 = (r0 & -2048);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_800EBCB4:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r4 = (r4_rot_0 & 2097148);
    r0 = (r4 & -2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800EBCC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800EBCD4;
    }
}

loc_800EBCC4:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(11));
    r0 = (r0_rot_3 & -2048);
    r0_mrot_3 = (r3 & 2047);
    r0_mdest_3 = (r0 & -2048);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_800EBCD4:
{
    r4 = -306642944;
    r3 = (r1 + 72);
    r4 = (r4 + -31968);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E9FACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = 2;
    r5 = r30;
    r6 = (r1 + 8);
    ctr = r0;
}

loc_800EBCF4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_2 & 16711680);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -16777216);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_2 = (r3_rot_3 & 255);
    r3_mdest_2 = (r3 & -256);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_6 = (r0_rot_7 & 65280);
    r0_mdest_6 = (r0 & -65281);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0 = (r3 | r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & -1);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_4 & 16711680);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & -16777216);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_3 = (r3_rot_5 & 255);
    r3_mdest_3 = (r3 & -256);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_7 = (r0_rot_10 & 65280);
    r0_mdest_7 = (r0 & -65281);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0 = (r3 | r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 8));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_6 & 16711680);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & -16777216);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_4 = (r3_rot_7 & 255);
    r3_mdest_4 = (r3 & -256);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_8 = (r0_rot_13 & 65280);
    r0_mdest_8 = (r0 & -65281);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r0 = (r3 | r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 12));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_8 & 16711680);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_15 & -16777216);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_5 = (r3_rot_9 & 255);
    r3_mdest_5 = (r3 & -256);
    r3 = (r3_mdest_5 | r3_mrot_5);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_9 = (r0_rot_16 & 65280);
    r0_mdest_9 = (r0 & -65281);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r0 = (r3 | r0);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 16));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_10 & 16711680);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_18 & -16777216);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_6 = (r3_rot_11 & 255);
    r3_mdest_6 = (r3 & -256);
    r3 = (r3_mdest_6 | r3_mrot_6);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_10 = (r0_rot_19 & 65280);
    r0_mdest_10 = (r0 & -65281);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r0 = (r3 | r0);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_20 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 20));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_12 & 16711680);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_21 & -16777216);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_7 = (r3_rot_13 & 255);
    r3_mdest_7 = (r3 & -256);
    r3 = (r3_mdest_7 | r3_mrot_7);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_11 = (r0_rot_22 & 65280);
    r0_mdest_11 = (r0 & -65281);
    r0 = (r0_mdest_11 | r0_mrot_11);
    r0 = (r3 | r0);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 24));
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_14 & 16711680);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_24 & -16777216);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_8 = (r3_rot_15 & 255);
    r3_mdest_8 = (r3 & -256);
    r3 = (r3_mdest_8 | r3_mrot_8);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_12 = (r0_rot_25 & 65280);
    r0_mdest_12 = (r0 & -65281);
    r0 = (r0_mdest_12 | r0_mrot_12);
    r0 = (r3 | r0);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_26 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 28));
    r5 = (r5 + 32);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3 = (r3_rot_16 & 16711680);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_27 & -16777216);
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_9 = (r3_rot_17 & 255);
    r3_mdest_9 = (r3 & -256);
    r3 = (r3_mdest_9 | r3_mrot_9);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_13 = (r0_rot_28 & 65280);
    r0_mdest_13 = (r0 & -65281);
    r0 = (r0_mdest_13 | r0_mrot_13);
    r0 = (r3 | r0);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_29 & -1);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EBCF4;
    }
}

loc_800EBE00:
{
    r3 = (r1 + 72);
    r4 = (r1 + 8);
    r5 = 60;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EA11Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWrite32((r30 + 60), r3);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 32), r0);
    r31 = MemoryInline::FlatRead32((r1 + 1116));
    r30 = MemoryInline::FlatRead32((r1 + 1112));
    r29 = MemoryInline::FlatRead32((r1 + 1108));
    r0 = MemoryInline::FlatRead32((r1 + 1124));
    ctx->lr = r0;
    r1 = (r1 + 1120);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EBBE4 func_800EBBE4 preserves=true fpr_mask=0x00000000
