#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A4648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A4648;

loc_801A4648:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r4;
    r4 = (r1 + 8);
    // inline leaf 0x801A8224 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -25344));
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -25340));
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801A8224
    r5 = r31;
    r3 = (r1 + 16);
    r4 = (r13 + -28992);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801A468Cu;
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
    InvokeDirectCpu<0x80011A2Cu>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801A4690:
{
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A46B4;
    }
}

loc_801A4698:
{
    r3 = r30;
    goto loc_801A46A8;
}

loc_801A46A0:
{
    r3 = (r3 + 4);
    r31 = (r31 + 1);
}

loc_801A46A8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A46B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A46A0;
    }
}

loc_801A46B4:
{
    r0 = (r31 + 2);
    r4 = 1;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    // inline leaf 0x801A1104 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -29024));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -29024), r0);
    // end of inlined leaf 0x801A1104
    r6 = (r31 + 1);
    r0 = (r1 + 16);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_801A46D0:
{
    MemoryInline::FlatWrite32(r3, r0);
    r4 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801A47EC;
    }
}

loc_801A46DC:
{
}

loc_801A46E0:
{
    r7 = (r31 + -7);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(8))) {
        goto loc_801A47B8;
    }
}

loc_801A46E8:
{
    r8 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801A4708;
    }
}

loc_801A46F4:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_801A4700:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_801A4708;
    }
}

loc_801A4704:
{
    r9 = 1;
}

loc_801A4708:
{
}

loc_801A470C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801A4744;
    }
}

loc_801A4710:
{
    r0 = (r31 + 1);
    r5 = 1;
    r6 = (r0 & -2147483648);
    r0 = (r6 + -2147483648);
}

loc_801A4724:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_801A4738;
    }
}

loc_801A4728:
{
    r0 = (r31 & -2147483648);
}

loc_801A4730:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_801A4738;
    }
}

loc_801A4734:
{
    r5 = 0;
}

loc_801A4738:
{
}

loc_801A473C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A4744;
    }
}

loc_801A4740:
{
    r8 = 1;
}

loc_801A4744:
{
}

loc_801A4748:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801A47B8;
    }
}

loc_801A474C:
{
    r0 = (r7 + 6);
    r5 = (r30 + 4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r6 = (r3 + 4);
    ctr = r0;
}

loc_801A4764:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(1))) {
        goto loc_801A47B8;
    }
}

loc_801A4768:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + -4), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -4));
    r4 = (r4 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, r5);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 24));
    r5 = (r5 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A4768;
    }
}

loc_801A47B8:
{
    r5 = (r31 + 1);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r0 = (r5 - r4);
    r6 = (r30 + r7);
    r7 = (r3 + r7);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_801A47D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A47EC;
    }
}

loc_801A47D8:
{
    r0 = MemoryInline::FlatRead32((r6 + -4));
    r6 = (r6 + 4);
    MemoryInline::FlatWrite32(r7, r0);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A47D8;
    }
}

loc_801A47EC:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r9 = r3;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r29;
    r8 = (r31 + 1);
    r3 = -1;
    r7 = 0;
    ctx->lr = 0x801A480Cu;
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
    InvokeDirectCpu<0x801A3E00u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A4648 func_801A4648 preserves=true fpr_mask=0x00000000
