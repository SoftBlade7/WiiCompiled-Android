#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1AE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A1AE4;

loc_801A1AE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80290000u;
    r31 = (r31 + -3864);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->lr = 0x801A1B04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E574u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1B08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A1B1C;
    }
}

loc_801A1B0C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1754u>(ctx);
    r3 = (r31 + 436);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801A1B1C:
{
    ctx->lr = 0x801A1B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E574u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1B24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A1B38;
    }
}

loc_801A1B28:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A15ECu>(ctx);
    r3 = (r31 + 464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801A1B38:
{
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r0 = (r3 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1B40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A1BE8;
    }
}

loc_801A1B44:
{
    // inline leaf 0x8012E564 (2 guest instruction(s))
    r3 = ctx->msr;
    // end of inlined leaf 0x8012E564
    r30 = r3;
    // sync @ 0x801A1B4C (no-op)
    r3 = 48;
    // inline leaf 0x8012E56C (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x8012E56C
    // sync @ 0x801A1B58 (no-op)
    // sync @ 0x801A1B5C (no-op)
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r3 = (r3 & 2147483647);
    // inline leaf 0x8012E58C (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x8012E58C
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x8012E58C
    // sync @ 0x801A1B6C (no-op)
    // sync @ 0x801A1B70 (no-op)
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r3 = (r3 & 2147483647);
    // inline leaf 0x8012E58C (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x8012E58C
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x8012E58C
    // sync @ 0x801A1B80 (no-op)
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r3 = (r3 | 2097152);
    // inline leaf 0x8012E58C (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x8012E58C
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x8012E58C
}

loc_801A1B90:
{
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1B98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A1B90;
    }
}

loc_801A1B9C:
{
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r3 = (r3 & -2097153);
    // inline leaf 0x8012E58C (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x8012E58C
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x8012E58C
    goto loc_801A1BB8;
}

loc_801A1BAC:
{
    r3 = (r31 + 0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801A1BB8:
{
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1BC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A1BAC;
    }
}

loc_801A1BC4:
{
    r3 = r30;
    // inline leaf 0x8012E56C (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x8012E56C
    // inline leaf 0x8012E584 (2 guest instruction(s))
    // mfspr 1017 unsupported @ 0x8012E584
    r3 = PPC_ReadSpr(1017);
    // end of inlined leaf 0x8012E584
    r0 = (r3 | -2147483648);
    r3 = (r0 & -2097153);
    // inline leaf 0x8012E58C (2 guest instruction(s))
    // mtspr 1017 (privileged/OS register) @ 0x8012E58C
    PPC_WriteSpr(1017, r3);
    // end of inlined leaf 0x8012E58C
    r3 = (r31 + 492);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
}

loc_801A1BE8:
{
    r4 = 0x801A0000u;
    r3 = 1;
    r4 = (r4 + 6556);
    ctx->lr = 0x801A1BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A278Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r31 + 516);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D3ACu>(ctx);
    r1 = ctx->gpr[1];
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
// RECOMP_REGISTRATION base 0x801A1AE4 func_801A1AE4 preserves=true fpr_mask=0x00000000
