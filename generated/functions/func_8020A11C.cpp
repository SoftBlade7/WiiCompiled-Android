#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020A11C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8020A11C;

loc_8020A11C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020A140:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8020A15C;
    }
}

loc_8020A144:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020A14C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8020A15C;
    }
}

loc_8020A150:
{
    r0 = (r3 * 320);
    r3 = (r4 + r0);
    goto loc_8020A160;
}

loc_8020A15C:
{
    r3 = 0;
}

loc_8020A160:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A1A0;
    }
}

loc_8020A168:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x8020A174u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x802064E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A188;
    }
}

loc_8020A17C:
{
    ctx->lr = 0x8020A180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80206244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0;
    goto loc_8020A1A8;
}

loc_8020A188:
{
    ctx->lr = 0x8020A18Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8020A190:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020A1A8;
    }
}

loc_8020A194:
{
    r3 = -1;
    goto loc_8020A1A8;
}

loc_8020A1A0:
{
    r3 = 65536;
    r3 = (r3 + -20477);
}

loc_8020A1A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A1AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020A228;
    }
}

loc_8020A1B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020A1B8:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_8020A1D4;
    }
}

loc_8020A1BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020A1C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020A1D4;
    }
}

loc_8020A1C8:
{
    r0 = (r30 * 320);
    r3 = (r3 + r0);
    goto loc_8020A1D8;
}

loc_8020A1D4:
{
    r3 = 0;
}

loc_8020A1D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A1DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A1F8;
    }
}

loc_8020A1E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A1F8;
    }
}

loc_8020A1E4:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A1EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A1F8;
    }
}

loc_8020A1F0:
{
    r4 = 0;
    ctx->lr = 0x8020A1F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8020A1F8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8020A204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80207968u>(ctx);
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

loc_8020A208:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020A220;
    }
}

loc_8020A210:
{
    ctx->lr = 0x8020A214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020A218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A220;
    }
}

loc_8020A21C:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
}

loc_8020A220:
{
    r3 = r31;
    goto loc_8020A234;
}

loc_8020A228:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A230;
    }
}

loc_8020A22C:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
}

loc_8020A230:
{
    r3 = 0;
}

loc_8020A234:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020A11C func_8020A11C preserves=true fpr_mask=0x00000000
