#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802321C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802321C8;

loc_802321C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = r4;
    r4 = r5;
    r5 = r6;
    ctx->lr = 0x802321ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E4564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802321F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-9))) {
        goto loc_80232220;
    }
}

loc_802321F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-41));
}

loc_802321F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232254;
    }
}

loc_802321FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023220C;
    }
}

loc_80232200:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-46));
}

loc_80232204:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232254;
    }
}

loc_80232208:
{
    goto loc_8023227C;
}

loc_8023220C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_80232210:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023227C;
    }
}

loc_80232214:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-21));
}

loc_80232218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80232254;
    }
}

loc_8023221C:
{
    goto loc_8023227C;
}

loc_80232220:
{
}

loc_80232224:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-2))) {
        goto loc_80232234;
    }
}

loc_80232228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_8023222C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023227C;
    }
}

loc_80232230:
{
    goto loc_80232268;
}

loc_80232234:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80232238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232240;
    }
}

loc_8023223C:
{
    goto loc_8023227C;
}

loc_80232240:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_8023228C;
}

loc_80232254:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_8023228C;
}

loc_80232268:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_8023228C;
}

loc_8023227C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_8023228C:
{
    r3 = r0;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802321C8 func_802321C8 preserves=true fpr_mask=0x00000000
