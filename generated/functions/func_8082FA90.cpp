#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082FA90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8082FB40_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8082FA90;

loc_8082FA90:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8082FAB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082FAD8;
    }
}

loc_8082FAB8:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_8082FB60;
}

loc_8082FAD8:
{
    r7 = 0x802A0000u;
    r7 = (r7 + 16640);
    r6 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    // inline leaf 0x80592498 (13 guest instruction(s))
}

loc_inl0_0x80592498:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 6432));
}

loc_inl0_0x805924A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805924C4;
    }
}

loc_inl0_0x805924A8:
{
    r5 = 0x809C0000u;
    r0 = (r3 * 2688);
    r5 = MemoryInline::FlatRead32((r5 + 6436));
    r3 = (r4 * 56);
    r0 = (r5 + r0);
    r3 = (r3 + r0);
    goto loc_inl0_cont_80592498;
}

loc_inl0_0x805924C4:
{
    r3 = 0;
}

loc_inl0_cont_80592498:
{
    // end of inlined leaf 0x80592498
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082FB04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FB28;
    }
}

loc_8082FB08:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8082FB28:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r4 = 0x808E0000u;
    r4 = (r4 + -29784);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    addr_lfsx_8082FB40_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8082FB40_loc_0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWrite32(r30, r3);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r30 + 4), r3);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_8082FB60:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000DA gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082FA90 func_8082FA90 preserves=true fpr_mask=0x00000000
