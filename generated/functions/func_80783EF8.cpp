#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80783EF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80783EF8;

loc_80783EF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 * 240);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r5 = 0;
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 46));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80783F40;
    }
}

loc_80783F2C:
{
    r3 = 0x809C0000u;
    r0 = (r4 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r5 = (r3 + 4);
}

loc_80783F40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80783F44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783FCC;
    }
}

loc_80783F48:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80783F50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783F68;
    }
}

loc_80783F54:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80783F64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80783F6C;
}

loc_80783F68:
{
    r3 = -1;
}

loc_80783F6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80783F70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783F78;
    }
}

loc_80783F74:
{
    goto loc_80783FCC;
}

loc_80783F78:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80783F88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783FCC;
    }
}

loc_80783F8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783FA8;
    }
}

loc_80783F90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80783F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783FC4;
    }
}

loc_80783F98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783FB8;
    }
}

loc_80783F9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80783FA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783FB8;
    }
}

loc_80783FA4:
{
    goto loc_80783FCC;
}

loc_80783FA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_80783FAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783FCC;
    }
}

loc_80783FB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_80783FB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783FC4;
    }
}

loc_80783FB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
    goto loc_80783FCC;
}

loc_80783FC4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 49), static_cast<uint8_t>(r0));
}

loc_80783FCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80783EF8 func_80783EF8 preserves=true fpr_mask=0x00000000
