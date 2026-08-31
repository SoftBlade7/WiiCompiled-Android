#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80160984(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80160984;

loc_80160984:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
}

loc_801609A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801609B8;
    }
}

loc_801609A8:
{
    r4 = 0x80340000u;
    r4 = (r4 + 13248);
    MemoryInline::FlatWriteRam32((r4 + 120), r31);
    goto loc_801609D4;
}

loc_801609B8:
{
    r4 = MemoryInline::FlatRead32((r13 + -26016));
    r5 = 0x80340000u;
    r5 = (r5 + 13248);
    r0 = (r4 + -1);
    r0 = (r0 * 20);
    r4 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 40), r31);
}

loc_801609D4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
}

loc_801609DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801609F8;
    }
}

loc_801609E0:
{
    r3 = 19070976;
    r4 = 0x80160000u;
    r3 = (r3 + 17768);
    r4 = (r4 + -4204);
    ctx->lr = 0x801609F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801640B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80160B04;
}

loc_801609F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(32));
}

loc_801609FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80160A18;
    }
}

loc_80160A00:
{
    r3 = 19070976;
    r4 = 0x80160000u;
    r3 = (r3 + 17769);
    r4 = (r4 + -4204);
    ctx->lr = 0x80160A14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801640B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80160B04;
}

loc_80160A18:
{
    r0 = (r31 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80160A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80160AE8;
    }
}

loc_80160A20:
{
    r5 = 0x80160000u;
    r0 = 0;
    r5 = (r5 + -5264);
    r3 = 0x80340000u;
    MemoryInline::FlatWrite32((r13 + -25992), r0);
    r3 = (r3 + 12416);
    r4 = MemoryInline::FlatRead32((r13 + -25880));
    MemoryInline::FlatWrite32((r13 + -25868), r5);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r4 + 60));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80160A4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80160A68;
    }
}

loc_80160A50:
{
    r5 = 0x80290000u;
    r3 = (r13 + -29484);
    r5 = (r5 + -31792);
    r4 = 1083;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80160A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A2660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80160A68:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80166964u>(ctx);
    r3 = ctx->gpr[3];
    r6 = MemoryInline::FlatRead32((r13 + -25956));
    r31 = 0x80340000u;
    r31 = (r31 + 12416);
    r0 = MemoryInline::FlatRead32((r13 + -25956));
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 1;
    r0 = ~(r0 | r0);
    r7 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 2);
    r5 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r4 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r0 = (r5 + 31);
    r5 = (r0 & -32);
    ctx->lr = 0x80160AA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015E964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -25956));
    r6 = 0x80160000u;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r6 = (r6 + -4888);
    r0 = ~(r0 | r0);
    r7 = MemoryInline::FlatRead32((r13 + -25880));
    r0 = (r0 & 2);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -25956));
    r4 = (r3 + 31);
    r3 = MemoryInline::FlatRead32((r7 + 56));
    r4 = (r4 & -32);
    r5 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80166330u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80160B04;
}

loc_80160AE8:
{
    r3 = 39;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80160AF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015E964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0x80160000u;
    r3 = (r3 + -3704);
    ctx->lr = 0x80160B04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80165B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80160B04:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80160984 func_80160984 preserves=true fpr_mask=0x00000000
