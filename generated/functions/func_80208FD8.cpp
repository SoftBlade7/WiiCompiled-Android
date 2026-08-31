#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80208FD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80208FD8;

loc_80208FD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80208FDC:
{
    r4 = -1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80209034;
    }
}

loc_80208FE4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_80208FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80209000;
    }
}

loc_80208FF0:
{
    r5 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_80208FF8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80209000;
    }
}

loc_80208FFC:
{
    goto loc_80209004;
}

loc_80209000:
{
    r5 = 0;
}

loc_80209004:
{
    r6 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80209010:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80209034;
    }
}

loc_80209014:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8020901C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209028;
    }
}

loc_80209020:
{
    r4 = r6;
    goto loc_80209034;
}

loc_80209028:
{
    r5 = (r5 + 320);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80209014;
    }
}

loc_80209034:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80208FD8 func_80208FD8 preserves=true fpr_mask=0x00000000
