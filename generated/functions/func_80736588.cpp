#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80736588(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80736588;

loc_80736588:
{
    r4 = MemoryInline::FlatRead32((r3 + 496));
    r5 = 0x808D0000u;
    r5 = (r5 + -21824);
    r4 = MemoryInline::FlatRead32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_807365AC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807365EC;
    }
}

loc_807365B0:
{
    r4 = 0x808D0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -21424);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x807365D0u:
        goto loc_807365D0;
        break;
    case 0x807365C8u:
        goto loc_807365C8;
        break;
    case 0x807365D4u:
        goto loc_807365D4;
        break;
    case 0x807365DCu:
        goto loc_807365DC;
        break;
    case 0x807365E4u:
        goto loc_807365E4;
        break;
    case 0x807365E8u:
        goto loc_807365E8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_807365C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    goto loc_807365EC;
}

loc_807365D0:
{
    goto loc_807365EC;
}

loc_807365D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    goto loc_807365EC;
}

loc_807365DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    goto loc_807365EC;
}

loc_807365E4:
{
    goto loc_807365EC;
}

loc_807365E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
}

loc_807365EC:
{
    MemoryInline::FlatWriteFloat32((r3 + 512), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80736588 func_80736588 preserves=true fpr_mask=0x00000000
