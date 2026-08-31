#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020B8BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_sthux_8020B908_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020B8BC;

loc_8020B8BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8020B8CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020B2B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B8D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B920;
    }
}

loc_8020B8D4:
{
    r3 = 0x80380000u;
    r3 = (r3 + 11504);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020B4E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8020B8E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B918;
    }
}

loc_8020B8E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B8EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8020B910;
    }
}

loc_8020B8F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(31));
}

loc_8020B8F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020B910;
    }
}

loc_8020B8F8:
{
    r4 = (r3 * 18);
    r3 = 0x80380000u;
    r0 = 0;
    r3 = (r3 + 11520);
    addr_sthux_8020B908_loc_0 = (r3 + r4);
    MemoryInline::FlatWrite16(addr_sthux_8020B908_loc_0, static_cast<uint16_t>(r0));
    r3 = addr_sthux_8020B908_loc_0;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
}

loc_8020B910:
{
    r3 = 1;
    goto loc_8020B924;
}

loc_8020B918:
{
    r3 = 0;
    goto loc_8020B924;
}

loc_8020B920:
{
    r3 = 0;
}

loc_8020B924:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020B8BC func_8020B8BC preserves=true fpr_mask=0x00000000
