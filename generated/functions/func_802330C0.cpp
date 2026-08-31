#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802330C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802330C0;

loc_802330C0:
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
    r6 = r7;
    ctx->lr = 0x802330E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E52B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 21);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_802330F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80233134;
    }
}

loc_802330F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802330F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80233120;
    }
}

loc_802330FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-41));
}

loc_80233100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80233134;
    }
}

loc_80233104:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-46));
}

loc_80233108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80233134;
    }
}

loc_8023310C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-9));
}

loc_80233110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80233148;
    }
}

loc_80233114:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_80233118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80233148;
    }
}

loc_8023311C:
{
    goto loc_8023315C;
}

loc_80233120:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_8023316C;
}

loc_80233134:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_8023316C;
}

loc_80233148:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_8023316C;
}

loc_8023315C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_8023316C:
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
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802330C0 func_802330C0 preserves=true fpr_mask=0x00000000
