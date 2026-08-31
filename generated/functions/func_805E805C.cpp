#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E805C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E805C;

loc_805E805C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E8088:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E8094;
    }
}

loc_805E808C:
{
    r3 = 0;
    goto loc_805E814C;
}

loc_805E8094:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E809C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E80A8;
    }
}

loc_805E80A0:
{
    r3 = 1;
    goto loc_805E814C;
}

loc_805E80A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E80B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E80BC;
    }
}

loc_805E80B4:
{
    r3 = 0;
    goto loc_805E814C;
}

loc_805E80BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E80C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E80D0;
    }
}

loc_805E80C8:
{
    r3 = 1;
    goto loc_805E814C;
}

loc_805E80D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E80D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E80E4;
    }
}

loc_805E80DC:
{
    r3 = 0;
    goto loc_805E814C;
}

loc_805E80E4:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E80EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E80F8;
    }
}

loc_805E80F0:
{
    r3 = 1;
    goto loc_805E814C;
}

loc_805E80F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E8100:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E810C;
    }
}

loc_805E8104:
{
    r3 = 0;
    goto loc_805E814C;
}

loc_805E810C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E8114:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E8120;
    }
}

loc_805E8118:
{
    r3 = 1;
    goto loc_805E814C;
}

loc_805E8120:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E8128:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E8134;
    }
}

loc_805E812C:
{
    r3 = 0;
    goto loc_805E814C;
}

loc_805E8134:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E813C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E8148;
    }
}

loc_805E8140:
{
    r3 = 1;
    goto loc_805E814C;
}

loc_805E8148:
{
    ctx->lr = 0x805E814Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805E814C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E8150:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E8160;
    }
}

loc_805E8154:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = r31;
    ctx->lr = 0x805E8160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805CEE08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805E8160:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E805C func_805E805C preserves=true fpr_mask=0x00000000
