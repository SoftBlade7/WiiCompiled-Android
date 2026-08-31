#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80112C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80112C4C;

loc_80112C4C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r13 + -26748));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112C68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112CFC;
    }
}

loc_80112C6C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26756));
}

loc_80112C74:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80112CB8;
    }
}

loc_80112C78:
{
    // inline leaf 0x80112034 (1 guest instruction(s))
    // end of inlined leaf 0x80112034
    r31 = 0;
    r30 = 0;
    goto loc_80112CA8;
}

loc_80112C88:
{
    r3 = MemoryInline::FlatRead32((r13 + -26748));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80112C98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80112CA0;
    }
}

loc_80112C9C:
{
    ctx->lr = 0x80112CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80112898u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80112CA0:
{
    r30 = (r30 + 4);
    r31 = (r31 + 1);
}

loc_80112CA8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26752));
}

loc_80112CB0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_80112C88;
    }
}

loc_80112CB4:
{
    // inline leaf 0x80112038 (1 guest instruction(s))
    // end of inlined leaf 0x80112038
}

loc_80112CB8:
{
    r30 = 0;
    r31 = 0;
    goto loc_80112CD8;
}

loc_80112CC4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26748));
    r3_addr_5 = (r3 + r31);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    ctx->lr = 0x80112CD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_80112CD8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26752));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80112CE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80112CC4;
    }
}

loc_80112CE4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26748));
    ctx->lr = 0x80112CECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26748), r0);
    MemoryInline::FlatWrite32((r13 + -26752), r0);
    MemoryInline::FlatWrite32((r13 + -26756), r0);
}

loc_80112CFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80112C4C func_80112C4C preserves=true fpr_mask=0x00000000
