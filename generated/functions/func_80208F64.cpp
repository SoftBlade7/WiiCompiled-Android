#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80208F64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80208F64;

loc_80208F64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80208F68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80208FD0;
    }
}

loc_80208F6C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_80208F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80208F88;
    }
}

loc_80208F78:
{
    r5 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_80208F80:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80208F88;
    }
}

loc_80208F84:
{
    goto loc_80208F8C;
}

loc_80208F88:
{
    r5 = 0;
}

loc_80208F8C:
{
    r0 = (r0 * 320);
    r6 = (r5 + r0);
    goto loc_80208FC8;
}

loc_80208F98:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80208FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80208FC4;
    }
}

loc_80208FA4:
{
    r4 = MemoryInline::FlatRead8((r5 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 6242));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80208FB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80208FC4;
    }
}

loc_80208FBC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80208FC4:
{
    r5 = (r5 + 320);
}

loc_80208FC8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_80208FCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80208F98;
    }
}

loc_80208FD0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80208F64 func_80208F64 preserves=true fpr_mask=0x00000000
