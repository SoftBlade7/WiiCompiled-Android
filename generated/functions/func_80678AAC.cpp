#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80208B70_statefree(uint32_t);

extern "C" void func_80678AAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80678AAC;

loc_80678AAC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r4;
    r4 = 64;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x80678AD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EA468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808C0000u;
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 3712));
    ctx->lr = 0x80678AE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802080FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678AE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678B0C;
    }
}

loc_80678AEC:
{
    r0 = (r3 + 0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(45057));
}

loc_80678AF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80678B00;
    }
}

loc_80678AF8:
{
    r3 = 1;
    goto loc_80678B60;
}

loc_80678B00:
{
    MemoryInline::FlatWrite32(r30, r3);
    r3 = 3;
    goto loc_80678B60;
}

loc_80678B0C:
{
    r3 = r31;
    ctx->lr = 0x80678B14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678B18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678B3C;
    }
}

loc_80678B1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80678B20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80678B2C;
    }
}

loc_80678B24:
{
    r31 = 1;
    goto loc_80678B40;
}

loc_80678B2C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80208B70u) && KnownTranslatedCpuCall<0x80208B70u>::kAvailable && !KnownTranslatedCpuCall<0x80208B70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80208B70u>()) {
        const auto state_free_result_80208B70_E1B = func_80208B70_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_80208B70_E1B);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80208B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32(r30, r3);
    r31 = 3;
    goto loc_80678B40;
}

loc_80678B3C:
{
    r31 = 0;
}

loc_80678B40:
{
    r3 = 0x808C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 3712));
    ctx->lr = 0x80678B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208414u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678B50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678B5C;
    }
}

loc_80678B54:
{
    MemoryInline::FlatWrite32(r30, r3);
    r31 = 3;
}

loc_80678B5C:
{
    r3 = r31;
}

loc_80678B60:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80678AAC func_80678AAC preserves=true fpr_mask=0x00000000
