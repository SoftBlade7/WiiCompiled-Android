#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CDED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CDED8;

loc_800CDED8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x802F0000u;
    r31 = (r30 + 4936);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r30 + 4936));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CDFA0;
    }
}

loc_800CDF0C:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CDFA0;
    }
}

loc_800CDF1C:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CDFA0;
    }
}

loc_800CDF2C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x800CDF34u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D17F4u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r5 = 16777216;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r9 = (r5 + -1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r10 = (r10_rot_1 & -1);
    r5 = 2555904;
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r10_mrot_1 = (r10_rot_2 & -256);
    r10_mdest_1 = (r10 & 255);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r7 = 1812463616;
    r0 = (r5 + -24893);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & -16777216);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r8_mrot_1 = (r8_rot_2 & 16777215);
    r8_mdest_1 = (r8 & -16777216);
    r8 = (r8_mdest_1 | r8_mrot_1);
    r6 = 1566113792;
    r3 = (r6 + -29851);
    r7 = (r7 + -30363);
    r6 = 0;
    r5 = (r10 & r9);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & -16777216);
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    r4 = (r5 | r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r31 + 4), r4);
    MemoryInline::FlatWriteRam32((r30 + 4936), r8);
    MemoryInline::FlatWriteRam32((r31 + 12), r7);
    MemoryInline::FlatWriteRam32((r31 + 8), r3);
    MemoryInline::FlatWriteRam32((r31 + 20), r0);
    MemoryInline::FlatWriteRam32((r31 + 16), r6);
}

loc_800CDFA0:
{
    r10 = 0x802F0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800CDFA8:
{
    r9 = (r10 + 4936);
    r0 = MemoryInline::FlatRead32((r10 + 4936));
    r4 = MemoryInline::FlatRead32((r9 + 12));
    r5 = MemoryInline::FlatRead32((r9 + 4));
    r3 = (r4 * r0);
    r8 = MemoryInline::FlatRead32((r9 + 20));
    r6 = MemoryInline::FlatRead32((r9 + 8));
    r7 = MemoryInline::FlatRead32((r9 + 16));
    r0 = (r4 * r5);
    r0_addc_right_0 = r0;
    r0 = (r8 + r0_addc_right_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r9 + 4), r0);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r6 * r5);
    r0 = (r4 + r0);
    r0 = (r0 + r3);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r7 + r0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r10 + 4936), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CDFF4;
    }
}

loc_800CDFF0:
{
    goto loc_800CE004;
}

loc_800CDFF4:
{
    r4 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r29)) >> 32));
    r3 = (r4 * r29);
    r3 = (r0 + r3);
}

loc_800CE004:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CDED8 func_800CDED8 preserves=true fpr_mask=0x00000000
