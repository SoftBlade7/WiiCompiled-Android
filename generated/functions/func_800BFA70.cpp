#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BFA70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800BFA70;

loc_800BFA70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = r4;
    // inline leaf 0x8019C6E4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8019C6E4
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x800BC5E0 (9 guest instruction(s))
}

loc_inl1_0x800BC5E0:
{
    r4 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC5E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC5F4;
    }
}

loc_inl1_0x800BC5EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC5E0;
}

loc_inl1_0x800BC5F4:
{
    r0 = (r3 * 480);
    r3 = (r4 + r0);
    r3 = (r3 + 6992);
}

loc_inl1_cont_800BC5E0:
{
    // end of inlined leaf 0x800BC5E0
    r0 = (r28 + 3);
    r30 = r3;
}

loc_800BFAAC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800BFB00;
    }
}

loc_800BFAB0:
{
}

loc_800BFAB4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800BFB48;
    }
}

loc_800BFAB8:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BFAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BFAD0;
    }
}

loc_800BFAC8:
{
}

loc_800BFACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BFB8C;
    }
}

loc_800BFAD0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r31 = 0;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r31);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800BFB8C;
}

loc_800BFB00:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BFB0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BFB18;
    }
}

loc_800BFB10:
{
}

loc_800BFB14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BFB8C;
    }
}

loc_800BFB18:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r31 = 2;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r28);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800BFB8C;
}

loc_800BFB48:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead32((r3 + 6976));
}

loc_800BFB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BFB60;
    }
}

loc_800BFB58:
{
}

loc_800BFB5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_800BFB8C;
    }
}

loc_800BFB60:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = 0;
    // inline leaf 0x800BC460 (3 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r4 + 6964), r3);
    // end of inlined leaf 0x800BC460
    r31 = 5;
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6976), r31);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite32((r3 + 6984), r28);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800BFB8C:
{
    r12 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800BFB94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BFBA0;
    }
}

loc_800BFB98:
{
    ctr = r12;
    ctx->lr = 0x800BFBA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800BFBA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BFA70 func_800BFA70 preserves=true fpr_mask=0x00000000
