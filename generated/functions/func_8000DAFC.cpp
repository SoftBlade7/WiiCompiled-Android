#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000DAFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000DAFC;

loc_8000DAFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = MemoryInline::FlatRead16((r3 + 2));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r3 = r30;
    ctx->lr = 0x8000DB20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8000D998u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8000DB28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8000DC84;
    }
}

loc_8000DB2C:
{
}

loc_8000DB30:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(36))) {
        goto loc_8000DB38;
    }
}

loc_8000DB34:
{
    r31 = 36;
}

loc_8000DB38:
{
}

loc_8000DB3C:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_8000DC24;
    }
}

loc_8000DB40:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8000DB48:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_8000DC24;
    }
}

loc_8000DB4C:
{
    r4 = (r30 + 5);
    r4_addr_1 = (r4 + r31);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r3 = (r4 + r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8000DB5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000DB68;
    }
}

loc_8000DB60:
{
    r4 = 1;
    goto loc_8000DBC4;
}

loc_8000DB68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000DB74;
    }
}

loc_8000DB6C:
{
    r4 = -1;
    goto loc_8000DBC4;
}

loc_8000DB74:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
    r3 = (r3 + 1);
    r4 = (r4 + r0);
    r0 = (r4 - r3);
    ctr = r0;
}

loc_8000DB8C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_8000DBAC;
    }
}

loc_8000DB90:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8000DB98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000DBA4;
    }
}

loc_8000DB9C:
{
    r4 = 1;
    goto loc_8000DBC4;
}

loc_8000DBA4:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000DB90;
    }
}

loc_8000DBAC:
{
    r3 = (r31 + r30);
    r4 = -1;
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 1);
}

loc_8000DBBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000DBC4;
    }
}

loc_8000DBC0:
{
    r4 = 1;
}

loc_8000DBC4:
{
}

loc_8000DBC8:
{
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r31));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8000DC24;
    }
}

loc_8000DBD0:
{
    r4 = (r30 + 5);
    r0 = 0;
    r5 = (r4 + r31);
    r5 = (r5 + -1);
}

loc_8000DBE0:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_8000DBE8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(9))) {
        goto loc_8000DBF8;
    }
}

loc_8000DBEC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_8000DC24;
}

loc_8000DBF8:
{
}

loc_8000DBFC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_8000DC18;
    }
}

loc_8000DC00:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    goto loc_8000DC24;
}

loc_8000DC18:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + -1);
    goto loc_8000DBE0;
}

loc_8000DC24:
{
    r5 = 0;
    goto loc_8000DC40;
}

loc_8000DC2C:
{
    r4 = MemoryInline::FlatRead8((r30 + 4));
    r3 = (r30 + r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
}

loc_8000DC40:
{
    r3 = MemoryInline::FlatRead8((r30 + 4));
}

loc_8000DC48:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r31))) {
        goto loc_8000DC2C;
    }
}

loc_8000DC4C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + -1);
    r5 = 0;
    r0 = (r0 - r3);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    goto loc_8000DC78;
}

loc_8000DC64:
{
    r4 = (r30 + r5);
    r5 = (r5 + 1);
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (r3 + 48);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
}

loc_8000DC78:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8000DC80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8000DC64;
    }
}

loc_8000DC84:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000DAFC func_8000DAFC preserves=true fpr_mask=0x00000000
