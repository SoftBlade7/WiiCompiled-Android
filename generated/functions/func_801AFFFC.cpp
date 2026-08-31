#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AFFFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AFFFC;

loc_801AFFFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -25188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B0018:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0030;
    }
}

loc_801B001C:
{
    r0 = 0;
    r3 = 0x801B0000u;
    MemoryInline::FlatWrite32((r13 + -25188), r0);
    r3 = (r3 + 196);
    ctx->lr = 0x801B0030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B2CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_801B0030:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801B0034:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B00A4;
    }
}

loc_801B0038:
{
    r0 = MemoryInline::FlatRead32((r13 + -25160));
    r31 = 0;
    r3 = 0;
}

loc_801B0048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B005C;
    }
}

loc_801B004C:
{
    r0 = MemoryInline::FlatRead32((r13 + -28916));
}

loc_801B0054:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_801B005C;
    }
}

loc_801B0058:
{
    r3 = 1;
}

loc_801B005C:
{
}

loc_801B0060:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801B0074;
    }
}

loc_801B0064:
{
    // inline leaf 0x801B254C (7 guest instruction(s))
    r3 = 0x802A0000u;
    r4 = MemoryInline::FlatRead32((r3 + -12464));
    r3 = (-1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801B254C
}

loc_801B006C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B0074;
    }
}

loc_801B0070:
{
    r31 = 1;
}

loc_801B0074:
{
    r0 = MemoryInline::FlatRead32((r13 + -25192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B007C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B009C;
    }
}

loc_801B0080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801B0084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B009C;
    }
}

loc_801B0088:
{
    r3 = -268435456;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AF1E4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r13 + -25192), r3);
    r3 = 0;
    goto loc_801B00B0;
}

loc_801B009C:
{
    r3 = r31;
    goto loc_801B00B0;
}

loc_801B00A4:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -25192), r0);
}

loc_801B00B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000203B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AFFFC func_801AFFFC preserves=true fpr_mask=0x00000000
