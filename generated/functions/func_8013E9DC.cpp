#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013E9DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013E9DC;

loc_8013E9DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80330000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
}

loc_8013E9EC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 * 52);
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013EA14;
    }
}

loc_8013EA08:
{
    r30 = MemoryInline::FlatRead16((r31 + 6236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8013EA10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EA1C;
    }
}

loc_8013EA14:
{
    r3 = 7;
    goto loc_8013EA7C;
}

loc_8013EA1C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6238));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_8013EA24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013EA30;
    }
}

loc_8013EA28:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
}

loc_8013EA2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EA50;
    }
}

loc_8013EA30:
{
    r3 = 65536;
    r0 = 0;
    r4 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 6238), static_cast<uint16_t>(r4));
    r3 = 0;
    MemoryInline::FlatWrite16((r31 + 6236), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r31 + 6244), r0);
    goto loc_8013EA7C;
}

loc_8013EA50:
{
    r0 = 5;
    r4 = 19;
    MemoryInline::FlatWrite16((r31 + 6236), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 6238));
    ctx->lr = 0x8013EA64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801448C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013EA68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EA78;
    }
}

loc_8013EA6C:
{
    MemoryInline::FlatWrite16((r31 + 6236), static_cast<uint16_t>(r30));
    r3 = 3;
    goto loc_8013EA7C;
}

loc_8013EA78:
{
    r3 = 1;
}

loc_8013EA7C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF00010FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013E9DC func_8013E9DC preserves=true fpr_mask=0x00000000
