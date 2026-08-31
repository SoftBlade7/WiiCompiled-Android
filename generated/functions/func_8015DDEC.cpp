#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015DDEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015DDEC;

loc_8015DDEC:
{
    r5 = MemoryInline::FlatRead32((r13 + -26080));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8015DDF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DE58;
    }
}

loc_8015DDF8:
{
    MemoryInline::FlatWrite32((r13 + -26076), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26084), r3);
    MemoryInline::FlatWrite32((r13 + -26080), r3);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8015DE18:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8015DE24:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8015DE54;
    }
}

loc_8015DE28:
{
    r0 = MemoryInline::FlatRead32((r5 + 60));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r5 + 60), r3);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r3 + 56), r5);
}

loc_8015DE40:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8015DE4C;
    }
}

loc_8015DE44:
{
    MemoryInline::FlatWrite32((r13 + -26080), r3);
    goto loc_8015DE60;
}

loc_8015DE4C:
{
    MemoryInline::FlatWrite32((r4 + 56), r3);
    goto loc_8015DE60;
}

loc_8015DE54:
{
    r5 = MemoryInline::FlatRead32((r5 + 56));
}

loc_8015DE58:
{
}

loc_8015DE5C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8015DE18;
    }
}

loc_8015DE60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8015DE64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8015DE68:
{
    r4 = MemoryInline::FlatRead32((r13 + -26084));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r0 = MemoryInline::FlatRead32((r13 + -26084));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r13 + -26084), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015DDEC func_8015DDEC preserves=true fpr_mask=0x00000000
