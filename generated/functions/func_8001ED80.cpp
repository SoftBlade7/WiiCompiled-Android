#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001ED80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001ED80;

loc_8001ED80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r3 = 18;
    r5 = 52;
    r4 = 86;
    r0 = 120;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r6 = 1;
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r13 + -27512), r6);
    r0 = (r4 + -305397760);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(22136));
}

loc_8001EDBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001EDC8;
    }
}

loc_8001EDC0:
{
    MemoryInline::FlatWrite32((r13 + -27512), r6);
    goto loc_8001EDEC;
}

loc_8001EDC8:
{
    r0 = (r4 + -2018902016);
}

loc_8001EDD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13330))) {
        goto loc_8001EDDC;
    }
}

loc_8001EDD4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -27512), r0);
}

loc_8001EDDC:
{
    r0 = (r4 + -2018902016);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13330));
}

loc_8001EDE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001EDEC;
    }
}

loc_8001EDE8:
{
    r3 = 1;
}

loc_8001EDEC:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000205B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001ED80 func_8001ED80 preserves=true fpr_mask=0x00000000
