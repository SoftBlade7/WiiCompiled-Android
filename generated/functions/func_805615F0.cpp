#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805615F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805615F0;

loc_805615F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r3 = 0x80890000u;
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5108));
    r9 = MemoryInline::FlatRead32((r5 + 32));
    r10 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5100));
    r7 = 0;
    r6 = 256;
    r4 = 4;
    r5 = 6;
    goto loc_80561674;
}

loc_80561620:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r8 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_80561630:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80561670;
    }
}

loc_80561634:
{
    MemoryInline::FlatWrite16((r8 + 62), static_cast<uint16_t>(r7));
    r0 = (r10 & 65535);
}

loc_8056163C:
{
    MemoryInline::FlatWrite16((r8 + 60), static_cast<uint16_t>(r6));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80561658;
    }
}

loc_80561644:
{
    r3 = MemoryInline::FlatRead32((r8 + 72));
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    r3 = MemoryInline::FlatRead32((r8 + 76));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    goto loc_80561670;
}

loc_80561658:
{
}

loc_8056165C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80561670;
    }
}

loc_80561660:
{
    r3 = MemoryInline::FlatRead32((r8 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r3 = MemoryInline::FlatRead32((r8 + 76));
    MemoryInline::FlatWrite32((r3 + 32), r4);
}

loc_80561670:
{
    r10 = (r10 + 1);
}

loc_80561674:
{
    r0 = MemoryInline::FlatRead16((r9 + 6));
    r3 = (r10 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80561680:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80561620;
    }
}

loc_80561684:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805615F0 func_805615F0 preserves=true fpr_mask=0x00000000
