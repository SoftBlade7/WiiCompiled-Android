#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801ECD04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801ECD04;

loc_801ECD04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_801ECD10:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801ECDA4;
    }
}

loc_801ECD24:
{
    ctx->lr = 0x801ECD28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E6008u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_801ECD2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ECD54;
    }
}

loc_801ECD30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801ECD40;
    }
}

loc_801ECD34:
{
}

loc_801ECD38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-29))) {
        goto loc_801ECD4C;
    }
}

loc_801ECD3C:
{
    goto loc_801ECD54;
}

loc_801ECD40:
{
}

loc_801ECD44:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_801ECD54;
    }
}

loc_801ECD48:
{
    goto loc_801ECD58;
}

loc_801ECD4C:
{
    r30 = -26;
    goto loc_801ECD58;
}

loc_801ECD54:
{
    r30 = 0x80000000u;
}

loc_801ECD58:
{
    r3 = 0x80350000u;
    r3 = (r3 + 29216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193AD8u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801ECD6C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801ECD74;
    }
}

loc_801ECD70:
{
    r30 = 0x80000000u;
}

loc_801ECD74:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r30 + -2147483648);
    r31 = r3;
}

loc_801ECD84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801ECDAC;
    }
}

loc_801ECD88:
{
    r3 = 0x80350000u;
    r4 = -1;
    r3 = (r3 + 29216);
    r0 = -2;
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    goto loc_801ECDAC;
}

loc_801ECDA4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
}

loc_801ECDAC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801ECDB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ECDC0;
    }
}

loc_801ECDB8:
{
    MemoryInline::FlatWrite32((r3 + 780), r30);
    goto loc_801ECDC4;
}

loc_801ECDC0:
{
    MemoryInline::FlatWrite32((r13 + -24268), r30);
}

loc_801ECDC4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801ECD04 func_801ECD04 preserves=true fpr_mask=0x00000000
