#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085F470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085F470;

loc_8085F470:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(206));
}

loc_8085F478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F4A0;
    }
}

loc_8085F47C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(207));
}

loc_8085F480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F4AC;
    }
}

loc_8085F484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(208));
}

loc_8085F488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F4B8;
    }
}

loc_8085F48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(209));
}

loc_8085F490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F4C4;
    }
}

loc_8085F494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(210));
}

loc_8085F498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085F4D0;
    }
}

loc_8085F49C:
{
    goto loc_8085F4D8;
}

loc_8085F4A0:
{
    r0 = 8200;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_8085F4D8;
}

loc_8085F4AC:
{
    r0 = 8201;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_8085F4D8;
}

loc_8085F4B8:
{
    r0 = 8202;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_8085F4D8;
}

loc_8085F4C4:
{
    r0 = 8203;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_8085F4D8;
}

loc_8085F4D0:
{
    r0 = 8204;
    MemoryInline::FlatWrite32((r3 + 996), r0);
}

loc_8085F4D8:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085F470 func_8085F470 preserves=true fpr_mask=0x00000000
