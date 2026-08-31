#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80209B68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80209B68;

loc_80209B68:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    r5 = 255;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRam32((r1 + 284), r31);
    r31 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 280), r30);
    r30 = r3;
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 276), r29);
    r29 = r4;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = 0;
    r3 = 47;
    goto loc_80209BCC;
}

loc_80209BA8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80209BB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80209BBC;
    }
}

loc_80209BB4:
{
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
    goto loc_80209BC0;
}

loc_80209BBC:
{
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
}

loc_80209BC0:
{
    r30 = (r30 + 1);
    r31 = (r31 + 1);
    r4 = (r4 + 1);
}

loc_80209BCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_80209BD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209BE0;
    }
}

loc_80209BD4:
{
    r5 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209BA8;
    }
}

loc_80209BE0:
{
    r3 = (r1 + 8);
    r4 = -11;
    ctx->lr = 0x80209BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020973Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(45057));
}

loc_80209BF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209C0C;
    }
}

loc_80209BF8:
{
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 256;
    ctx->lr = 0x80209C08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020E4F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80209C10;
}

loc_80209C0C:
{
    r3 = 0;
}

loc_80209C10:
{
    r0 = MemoryInline::FlatRead32((r1 + 292));
    r31 = MemoryInline::FlatRead32((r1 + 284));
    r30 = MemoryInline::FlatRead32((r1 + 280));
    r29 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80209B68 func_80209B68 preserves=true fpr_mask=0x00000000
