#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80139ED4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80139ED4;

loc_80139ED4:
{
    r3 = 0x80330000u;
    r0 = 4;
    r3 = (r3 + 25208);
    r6 = -1;
    r5 = (r3 + 7984);
    r7 = 0;
    r3 = r5;
    ctr = r0;
}

loc_80139EF4:
{
    r4 = MemoryInline::FlatRead8((r5 + 118));
    r0 = (r4 & 128);
}

loc_80139EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139F1C;
    }
}

loc_80139F00:
{
    r0 = (r4 & 16);
}

loc_80139F04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139F1C;
    }
}

loc_80139F08:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80139F10:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80139F1C;
    }
}

loc_80139F14:
{
    r3 = r5;
    r6 = r0;
}

loc_80139F1C:
{
    r4 = MemoryInline::FlatRead8((r5 + 254));
    r5 = (r5 + 136);
    r0 = (r4 & 128);
}

loc_80139F28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139F48;
    }
}

loc_80139F2C:
{
    r0 = (r4 & 16);
}

loc_80139F30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139F48;
    }
}

loc_80139F34:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80139F3C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80139F48;
    }
}

loc_80139F40:
{
    r3 = r5;
    r6 = r0;
}

loc_80139F48:
{
    r4 = MemoryInline::FlatRead8((r5 + 254));
    r5 = (r5 + 136);
    r0 = (r4 & 128);
}

loc_80139F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139F74;
    }
}

loc_80139F58:
{
    r0 = (r4 & 16);
}

loc_80139F5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139F74;
    }
}

loc_80139F60:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80139F68:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80139F74;
    }
}

loc_80139F6C:
{
    r3 = r5;
    r6 = r0;
}

loc_80139F74:
{
    r4 = MemoryInline::FlatRead8((r5 + 254));
    r5 = (r5 + 136);
    r0 = (r4 & 128);
}

loc_80139F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139FA0;
    }
}

loc_80139F84:
{
    r0 = (r4 & 16);
}

loc_80139F88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139FA0;
    }
}

loc_80139F8C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80139F94:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80139FA0;
    }
}

loc_80139F98:
{
    r3 = r5;
    r6 = r0;
}

loc_80139FA0:
{
    r7 = (r7 + 3);
    r5 = (r5 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80139EF4;
    }
}

loc_80139FAC:
{
    r0 = (r6 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80139FB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80139FB8:
{
    r4 = 0x80330000u;
    r0 = 4;
    r4 = (r4 + 25208);
    r5 = 0;
    r4 = (r4 + 7984);
    ctr = r0;
}

loc_80139FD0:
{
    r0 = MemoryInline::FlatRead8((r4 + 118));
    r0 = (r0 & 128);
}

loc_80139FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139FF0;
    }
}

loc_80139FDC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80139FE4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80139FF0;
    }
}

loc_80139FE8:
{
    r3 = r4;
    r6 = r0;
}

loc_80139FF0:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_80139FFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013A014;
    }
}

loc_8013A000:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8013A008:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_8013A014;
    }
}

loc_8013A00C:
{
    r3 = r4;
    r6 = r0;
}

loc_8013A014:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_8013A020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013A038;
    }
}

loc_8013A024:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8013A02C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_8013A038;
    }
}

loc_8013A030:
{
    r3 = r4;
    r6 = r0;
}

loc_8013A038:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013A044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013A05C;
    }
}

loc_8013A048:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8013A050:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013A05C;
    }
}

loc_8013A054:
{
    r3 = r4;
    r6 = r0;
}

loc_8013A05C:
{
    r5 = (r5 + 3);
    r4 = (r4 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80139FD0;
    }
}

loc_8013A068:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80139ED4 func_80139ED4 preserves=true fpr_mask=0x00000000
