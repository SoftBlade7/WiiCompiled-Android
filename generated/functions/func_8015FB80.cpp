#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015FB80(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015FB80;

loc_8015FB80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80340000u;
    r30 = (r30 + -6784);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r13 + -25884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8015FBA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015FBB0;
    }
}

loc_8015FBAC:
{
    goto loc_8015FD3C;
}

loc_8015FBB0:
{
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -25872));
    MemoryInline::FlatWrite32((r13 + -25964), r31);
    r3 = (r30 + 19392);
    r4 = MemoryInline::FlatRead32((r4 + 36));
    ctx->lr = 0x8015FBC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016411Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015FBCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015FCA4;
    }
}

loc_8015FBD0:
{
    r3 = MemoryInline::FlatRead32((r13 + -25876));
    r4 = (r30 + 19392);
    r5 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r13 + -25872));
    r0 = 1;
    r3 = (r30 + 19200);
    r4 = 32;
    MemoryInline::FlatWrite32((r5 + 12), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    MemoryInline::FlatWrite32((r13 + -25992), r31);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80166964u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015FC14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015FC1C;
    }
}

loc_8015FC18:
{
    MemoryInline::FlatWrite32((r13 + -26016), r31);
}

loc_8015FC1C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r31 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r13 + -26016));
    r31 = (r31 + 13248);
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r7 = 33;
    r5 = 65536;
    r3 = (r3 * 20);
    r4 = 32;
    r6 = (r31 + r6);
    MemoryInline::FlatWrite32((r6 + 28), r7);
    r3 = (r31 + r3);
    r0 = (r0 * 20);
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r4 = MemoryInline::FlatRead32((r13 + -26016));
    r5 = (r0 * 20);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r13 + -26016), r0);
    r4 = (r31 + r5);
    MemoryInline::FlatWrite32((r4 + 44), r3);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r6 = 0x80160000u;
    r3 = (r30 + 19424);
    r6 = (r6 + -328);
    r4 = 32;
    r5 = 65536;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80165708u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8015FE9C;
}

loc_8015FCA4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015FCB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015FCBC;
    }
}

loc_8015FCB8:
{
    MemoryInline::FlatWrite32((r13 + -26016), r31);
}

loc_8015FCBC:
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
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0x80160000u;
    r3 = 0;
    r5 = (r5 + 1980);
    r4 = 0;
    ctx->lr = 0x8015FD38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
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
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015FE9C;
}

loc_8015FD3C:
{
    r4 = MemoryInline::FlatRead32((r13 + -25876));
    r3 = (r30 + 19392);
    r5 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015FD50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8015FDF0;
    }
}

loc_8015FD54:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015FD64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015FD70;
    }
}

loc_8015FD68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26016), r0);
}

loc_8015FD70:
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
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0x80160000u;
    r3 = 0;
    r5 = (r5 + 1980);
    r4 = 0;
    ctx->lr = 0x8015FDECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
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
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015FE9C;
}

loc_8015FDF0:
{
    r31 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -25992), r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80166964u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015FE10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015FE18;
    }
}

loc_8015FE14:
{
    MemoryInline::FlatWrite32((r13 + -26016), r31);
}

loc_8015FE18:
{
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r31 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r13 + -26016));
    r31 = (r31 + 13248);
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r7 = 33;
    r5 = 65536;
    r3 = (r3 * 20);
    r4 = 32;
    r6 = (r31 + r6);
    MemoryInline::FlatWrite32((r6 + 28), r7);
    r3 = (r31 + r3);
    r0 = (r0 * 20);
    MemoryInline::FlatWrite32((r3 + 32), r5);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = MemoryInline::FlatRead32((r13 + -26016));
    r4 = MemoryInline::FlatRead32((r13 + -26016));
    r5 = (r0 * 20);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r13 + -26016), r0);
    r4 = (r31 + r5);
    MemoryInline::FlatWrite32((r4 + 44), r3);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r6 = 0x80160000u;
    r3 = (r30 + 19424);
    r6 = (r6 + -328);
    r4 = 32;
    r5 = 65536;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80165708u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015FE9C:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015FB80 func_8015FB80 preserves=true fpr_mask=0x00000000
