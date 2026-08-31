#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F8070(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801F8070;

loc_801F8070:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = (r4 + 1);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    goto loc_801F8098;
}

loc_801F8090:
{
    r7 = (r7 + 1);
    r5 = (r5 + 1);
}

loc_801F8098:
{
    r6 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801F80A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(126))) {
        goto loc_801F80B8;
    }
}

loc_801F80A8:
{
}

loc_801F80AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F80B8;
    }
}

loc_801F80B0:
{
}

loc_801F80B4:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(7))) {
        goto loc_801F8090;
    }
}

loc_801F80B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
}

loc_801F80BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F8134;
    }
}

loc_801F80C0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(126));
}

loc_801F80C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8134;
    }
}

loc_801F80CC:
{
    r7 = (r7 + 1);
    r4 = (r4 + r7);
    goto loc_801F80DC;
}

loc_801F80D8:
{
    r4 = (r4 + 1);
}

loc_801F80DC:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_801F80E8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_801F80F4;
    }
}

loc_801F80EC:
{
}

loc_801F80F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_801F80D8;
    }
}

loc_801F80F4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_801F80FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8108;
    }
}

loc_801F8100:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F8104:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8134;
    }
}

loc_801F8108:
{
    r4 = r31;
    r5 = (r1 + 8);
    ctx->lr = 0x801F8114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F7094u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F8118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8120;
    }
}

loc_801F811C:
{
    goto loc_801F8138;
}

loc_801F8120:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801F8128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8134;
    }
}

loc_801F812C:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80204618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F8134:
{
    r3 = 0;
}

loc_801F8138:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F8070 func_801F8070 preserves=true fpr_mask=0x00000000
