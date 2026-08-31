#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CBD50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CBD50;

loc_800CBD50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    ctx->lr = 0x800CBD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800CBD68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800CBD9C;
    }
}

loc_800CBD6C:
{
    // inline leaf 0x800BC400 (7 guest instruction(s))
}

loc_inl0_0x800BC400:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800BC408:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800BC414;
    }
}

loc_inl0_0x800BC40C:
{
    r3 = 0;
    goto loc_inl0_cont_800BC400;
}

loc_inl0_0x800BC414:
{
    r3 = (r3 + 364);
}

loc_inl0_cont_800BC400:
{
    // end of inlined leaf 0x800BC400
    r0 = -1;
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
    r4 = 65536;
    r31 = r3;
    r3 = (r4 + 26976);
    ctx->lr = 0x800CBD88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC3B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = 0x800D0000u;
    r3 = (r3 + -17136);
    ctx->lr = 0x800CBD98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7B70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800CBDD0;
}

loc_800CBD9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_800CBDA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CBDC0;
    }
}

loc_800CBDA4:
{
    // inline leaf 0x800BC650 (7 guest instruction(s))
}

loc_inl1_0x800BC650:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC658:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC664;
    }
}

loc_inl1_0x800BC65C:
{
    r3 = 0;
    goto loc_inl1_cont_800BC650;
}

loc_inl1_0x800BC664:
{
    r3 = MemoryInline::FlatRead32((r3 + 6984));
}

loc_inl1_cont_800BC650:
{
    // end of inlined leaf 0x800BC650
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-11));
}

loc_800CBDAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CBDD0;
    }
}

loc_800CBDB0:
{
    r31 = 13;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    goto loc_800CBDD0;
}

loc_800CBDC0:
{
    r4 = 0x800D0000u;
    r3 = 0;
    r4 = (r4 + -17584);
    ctx->lr = 0x800CBDD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BF8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800CBDD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CBD50 func_800CBD50 preserves=true fpr_mask=0x00000000
