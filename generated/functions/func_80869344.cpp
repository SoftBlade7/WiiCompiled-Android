#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80869344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80869344;

loc_80869344:
{
    r0 = MemoryInline::FlatRead32((r4 + 100));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_8086934C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80869368;
    }
}

loc_80869350:
{
    r3 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -16824);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80869368u:
        goto loc_80869368;
        break;
    case 0x80869374u:
        goto loc_80869374;
        break;
    case 0x80869380u:
        goto loc_80869380;
        break;
    case 0x8086938Cu:
        goto loc_8086938C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80869368:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_80869394;
}

loc_80869374:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_80869394;
}

loc_80869380:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_80869394;
}

loc_8086938C:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80869394:
{
    r0 = MemoryInline::FlatRead32((r4 + 156));
    r3 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r4 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8148));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80869344 func_80869344 preserves=true fpr_mask=0x00000000
