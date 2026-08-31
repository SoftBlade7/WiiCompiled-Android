#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015F68C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015F68C;

loc_8015F68C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
}

loc_8015F6B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015F6C4;
    }
}

loc_8015F6B4:
{
    r4 = 0x80340000u;
    r4 = (r4 + 13248);
    MemoryInline::FlatWriteRam32((r4 + 120), r30);
    goto loc_8015F6DC;
}

loc_8015F6C4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r4 = 0x80340000u;
    r4 = (r4 + 13248);
    r0 = (r0 * 20);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 20), r30);
}

loc_8015F6DC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(16));
}

loc_8015F6E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015F700;
    }
}

loc_8015F6E8:
{
    r3 = 19070976;
    r4 = 0x80160000u;
    r3 = (r3 + 17768);
    r4 = (r4 + -4204);
    ctx->lr = 0x8015F6FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801640B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015F854;
}

loc_8015F700:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(32));
}

loc_8015F704:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015F720;
    }
}

loc_8015F708:
{
    r3 = 19070976;
    r4 = 0x80160000u;
    r3 = (r3 + 17769);
    r4 = (r4 + -4204);
    ctx->lr = 0x8015F71Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801640B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015F854;
}

loc_8015F720:
{
    r0 = (r30 & 1);
}

loc_8015F724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015F7C4;
    }
}

loc_8015F728:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015F738:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015F744;
    }
}

loc_8015F73C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26016), r0);
}

loc_8015F744:
{
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r30 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r13 + -26016));
    r30 = (r30 + 13248);
    r5 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r6 = 16;
    r4 = 0;
    r3 = (r3 * 20);
    r5 = (r30 + r5);
    MemoryInline::FlatWrite32((r5 + 28), r6);
    r3 = (r30 + r3);
    r0 = (r0 * 20);
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r4 = MemoryInline::FlatRead32((r13 + -26016));
    r5 = (r0 * 20);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r13 + -26016), r0);
    r4 = (r30 + r5);
    MemoryInline::FlatWrite32((r4 + 44), r3);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0x80160000u;
    r3 = 0;
    r5 = (r5 + -1728);
    r4 = 0;
    ctx->lr = 0x8015F7C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016589Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015F854;
}

loc_8015F7C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015F7D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015F7E0;
    }
}

loc_8015F7D8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26016), r0);
}

loc_8015F7E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r30 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r13 + -26016));
    r30 = (r30 + 13248);
    r5 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r6 = 39;
    r4 = 0;
    r3 = (r3 * 20);
    r5 = (r30 + r5);
    MemoryInline::FlatWrite32((r5 + 28), r6);
    r3 = (r30 + r3);
    r0 = (r0 * 20);
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r4 = MemoryInline::FlatRead32((r13 + -26016));
    r5 = (r0 * 20);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r13 + -26016), r0);
    r4 = (r30 + r5);
    MemoryInline::FlatWrite32((r4 + 44), r3);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80160000u;
    r3 = (r3 + -1940);
    ctx->lr = 0x8015F854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80165B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015F854:
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
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF8F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015F68C func_8015F68C preserves=true fpr_mask=0x00000000
