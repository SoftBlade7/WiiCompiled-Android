#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015DE88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015DE88;

loc_8015DE88:
{
    r4 = 0;
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r13 + -26080));
}

loc_8015DEA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8015DED0;
    }
}

loc_8015DEA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015DEAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015DEC0;
    }
}

loc_8015DEB0:
{
    MemoryInline::FlatWrite32((r13 + -26080), r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r3 + 60), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015DEC0:
{
    MemoryInline::FlatWrite32((r13 + -26076), r4);
    MemoryInline::FlatWrite32((r13 + -26084), r4);
    MemoryInline::FlatWrite32((r13 + -26080), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015DED0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26084));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8015DED8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DEF8;
    }
}

loc_8015DEDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r13 + -26084), r0);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r3 + 56), r4);
    r0 = MemoryInline::FlatRead32((r13 + -26080));
    MemoryInline::FlatWrite32((r13 + -26076), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015DEF8:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r13 + -26076), r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r4 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r4 + 56), r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015DE88 func_8015DE88 preserves=true fpr_mask=0x00000000
