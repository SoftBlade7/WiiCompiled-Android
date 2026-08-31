#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086622C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086622C;

loc_8086622C:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8086623C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80866240:
{
}

loc_80866244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80866268;
    }
}

loc_80866248:
{
}

loc_8086624C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80866274;
    }
}

loc_80866250:
{
}

loc_80866254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80866280;
    }
}

loc_80866258:
{
}

loc_8086625C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8086628C;
    }
}

loc_80866260:
{
    goto loc_80866294;
}

loc_80866268:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80866294;
}

loc_80866274:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80866294;
}

loc_80866280:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80866294;
}

loc_8086628C:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80866294:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8086629C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808662AC;
    }
}

loc_808662A0:
{
}

loc_808662A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_808662BC;
    }
}

loc_808662A8:
{
    goto loc_808662C8;
}

loc_808662AC:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_808662C8;
}

loc_808662BC:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = (r5 + 2);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_808662C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_808662D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_808662D4:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32(r3, r0);
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

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8086622C func_8086622C preserves=true fpr_mask=0x00000000
