#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D518C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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

    goto loc_805D518C;

loc_805D518C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = MemoryInline::FlatRead32(r4);
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D28C8 (14 guest instruction(s))
}

loc_inl0_0x805D28C8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_inl0_0x805D28CC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_0x805D28F8;
    }
}

loc_inl0_0x805D28D0:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x805D28F0;
    }
}

loc_inl0_0x805D28E8:
{
    r3 = MemoryInline::FlatRead32((r4 + 464));
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F0:
{
    r3 = -1;
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F8:
{
    r3 = -1;
}

loc_inl0_cont_805D28C8:
{
    // end of inlined leaf 0x805D28C8
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D521Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r31 = r3;
    r4 = r29;
    r3 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D28C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D521Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r3));
}

loc_805D51E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805D51F4;
    }
}

loc_805D51EC:
{
    r3 = -1;
    goto loc_805D5200;
}

loc_805D51F4:
{
    r3 = 1;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805D5200;
    }
}

loc_805D51FC:
{
    r3 = (r30 - r29);
}

loc_805D5200:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xE000001A gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805D518C func_805D518C preserves=true fpr_mask=0x00000000
