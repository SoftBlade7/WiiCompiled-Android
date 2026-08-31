#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057B868(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8057B924_loc_0 = 0;
    uint32_t addr_lfsx_8057B92C_loc_0 = 0;
    uint32_t addr_lfsx_8057B978_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057B868;

loc_8057B868:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8057B8A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B8B0;
    }
}

loc_8057B8A4:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    goto loc_8057B97C;
}

loc_8057B8B0:
{
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r31 = (r3 + 36);
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r4 = MemoryInline::FlatRead32(r30);
    r5 = (r3 + 52);
    r6 = 4;
    r7 = 3;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_1 = (r3 & 8);
    r0_mdest_1 = (r0 & -9);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8057B8E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057B904;
    }
}

loc_8057B8E4:
{
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r31 = (r3 + 64);
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r5 = (r3 + 72);
    r6 = 2;
    r7 = 1;
}

loc_8057B904:
{
    r3 = 0x80890000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    f2.d = f1.d;
    ctr = r7;
}

loc_8057B91C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_8057B964;
    }
}

loc_8057B920:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    addr_lfsx_8057B924_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8057B924_loc_0);
    r3 = (r31 + r0);
    addr_lfsx_8057B92C_loc_0 = (r31 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_8057B92C_loc_0);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8057B934:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057B958;
    }
}

loc_8057B93C:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    goto loc_8057B964;
}

loc_8057B958:
{
    f2.d = f0.d;
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8057B920;
    }
}

loc_8057B964:
{
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_8057B96C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8057B97C;
    }
}

loc_8057B970:
{
    r0 = (r6 + -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    addr_lfsx_8057B978_loc_0 = (r31 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8057B978_loc_0);
}

loc_8057B97C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x8000003F fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057B868 func_8057B868 preserves=true fpr_mask=0x00000000
