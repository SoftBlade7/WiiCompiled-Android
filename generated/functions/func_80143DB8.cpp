#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143DB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80143DB8;

loc_80143DB8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r5 = (r5 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r5 + 172);
    r5 = 0;
    ctr = r0;
}

loc_80143DE0:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80143DE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143DFC;
    }
}

loc_80143DEC:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143DF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143DFC;
    }
}

loc_80143DF8:
{
    goto loc_80143E6C;
}

loc_80143DFC:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_80143E08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143E1C;
    }
}

loc_80143E0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143E14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143E1C;
    }
}

loc_80143E18:
{
    goto loc_80143E6C;
}

loc_80143E1C:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_80143E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143E3C;
    }
}

loc_80143E2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143E34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143E3C;
    }
}

loc_80143E38:
{
    goto loc_80143E6C;
}

loc_80143E3C:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_80143E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143E5C;
    }
}

loc_80143E4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143E54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143E5C;
    }
}

loc_80143E58:
{
    goto loc_80143E6C;
}

loc_80143E5C:
{
    r5 = (r5 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143DE0;
    }
}

loc_80143E68:
{
    r31 = 0;
}

loc_80143E6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80143E70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80143E80;
    }
}

loc_80143E74:
{
    r3 = r4;
    ctx->lr = 0x80143E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80143EB4;
}

loc_80143E80:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80143E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80143EAC;
    }
}

loc_80143E8C:
{
    r3 = (r31 + 20);
    ctx->lr = 0x80143E94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F25Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r4 = 258;
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctr = r12;
    ctx->lr = 0x80143EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80143EB4;
}

loc_80143EAC:
{
    r3 = r4;
    ctx->lr = 0x80143EB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80143EB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80143DB8 func_80143DB8 preserves=true fpr_mask=0x00000000
