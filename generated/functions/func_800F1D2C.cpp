#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F1D2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800F1D2C;

loc_800F1D2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0;
    r5 = 16386;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x802F0000u;
    r31 = (r31 + 8552);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 65536;
    r4 = (r30 + -2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x800F1D6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EE48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r31 + 96);
    r4 = 190;
    r5 = (r0 * 12);
    ctx->lr = 0x800F1D80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r30 + -2);
    r6 = (r31 + 96);
    r7 = (r1 + 8);
    r0 = (r0 * 12);
    r3 = 0;
    r5 = 16387;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x800F1DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EE48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r4 = 0x80280000u;
    r4 = (r4 + -21280);
    r3 = (r31 + 16);
    r5 = (r13 + -26804);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r31 + 16), r4);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800F1DC4:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r7));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800F1EB0;
    }
}

loc_800F1DD8:
{
}

loc_800F1DDC:
{
    r5 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_800F1E70;
    }
}

loc_800F1DE4:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800F1E00;
    }
}

loc_800F1DEC:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_800F1DF8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_800F1E00;
    }
}

loc_800F1DFC:
{
    r6 = 1;
}

loc_800F1E00:
{
}

loc_800F1E04:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800F1E70;
    }
}

loc_800F1E08:
{
    r0 = (r5 + 7);
    r8 = (r31 + 96);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r9 = (r31 + 32);
    ctr = r0;
}

loc_800F1E20:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_800F1E70;
    }
}

loc_800F1E24:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r9, r8);
    r3 = (r8 + 12);
    r0 = (r8 + 24);
    r7 = (r8 + 36);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r9 + 4), r3);
    r6 = (r8 + 48);
    r5 = (r8 + 60);
    r3 = (r8 + 72);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r9 + 8), r0);
    r0 = (r8 + 84);
    r8 = (r8 + 96);
    r4 = (r4 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r9 + 12), r7);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r9 + 16), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r9 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r9 + 24), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r9 + 28), r0);
    r9 = (r9 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F1E24;
    }
}

loc_800F1E70:
{
    r8 = MemoryInline::FlatRead32((r1 + 16));
    r7 = (r4 * 12);
    r6 = (r31 + 96);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r31 + 32);
    r0 = (r8 - r4);
    r6 = (r6 + r7);
    r3 = (r3 + r5);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r8));
}

loc_800F1E98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F1EB0;
    }
}

loc_800F1E9C:
{
    MemoryInline::FlatWrite32(r3, r6);
    r6 = (r6 + 12);
    r3 = (r3 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F1E9C;
    }
}

loc_800F1EB0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + 16);
    r5 = (r31 + 32);
    r4 = 0;
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r5);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F1D2C func_800F1D2C preserves=true fpr_mask=0x00000000
