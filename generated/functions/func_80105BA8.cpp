#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80105BA8(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80105BA8;

loc_80105BA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80105BB4:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32(r7);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80105BD8;
    }
}

loc_80105BC8:
{
}

loc_80105BCC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80105BD8;
    }
}

loc_80105BD0:
{
    r5 = 0;
    goto loc_80105C0C;
}

loc_80105BD8:
{
    r5 = MemoryInline::FlatRead32((r5 + 1492));
    goto loc_80105C00;
}

loc_80105BE0:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80105BE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80105BFC;
    }
}

loc_80105BEC:
{
    r0 = MemoryInline::FlatRead16((r5 + 12));
}

loc_80105BF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80105BFC;
    }
}

loc_80105BF8:
{
    goto loc_80105C0C;
}

loc_80105BFC:
{
    r5 = MemoryInline::FlatRead32((r5 + 84));
}

loc_80105C00:
{
}

loc_80105C04:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80105BE0;
    }
}

loc_80105C08:
{
    r5 = 0;
}

loc_80105C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80105C10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80105C24;
    }
}

loc_80105C14:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r3 = (r1 + 16);
    ctx->lr = 0x80105C20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801ED938u>(ctx);
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
    goto loc_80105C44;
}

loc_80105C24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80105C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105C44;
    }
}

loc_80105C2C:
{
    r0 = 106;
    r3 = (r1 + 12);
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    ctx->lr = 0x80105C40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801ED938u>(ctx);
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
    goto loc_80105C50;
}

loc_80105C44:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = (r1 + 8);
    ctx->lr = 0x80105C50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801ED938u>(ctx);
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
}

loc_80105C50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE6FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80105BA8 func_80105BA8 preserves=true fpr_mask=0x00000000
